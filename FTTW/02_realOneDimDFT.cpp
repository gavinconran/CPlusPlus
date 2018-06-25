// One dimensional DFTs of real data
// $ gcc -o exp02 02_realOneDimDFT.cpp -lfftw3 -lm

// In many practical applications, the input data in[i] are purely real numbers, 
// in which case the DFT output satisfies the “Hermitian” redundancy: out[i] is the conjugate of out[n-i].
// It is possible to take advantage of these circumstances in order to achieve 
// roughly a factor of two improvement in both speed and memory usage.

// Beware:
// 1) input and output arrays are of different sizes and types: 
//       the input is n real numbers, while the output is n/2+1 complex numbers (the non-redundant outputs);
// 2) the inverse transform (complex to real) has the side-effect of overwriting its input array, by default
 

#include <fftw3.h>
#include <iostream>

using namespace std;

int main()
{

    // allocate input and output arrays
    double *in_double, *out_double;
    fftw_complex *out_complex, *in_complex;;
    fftw_plan p_r2c, p_c2r;

    int N = 10; // size of the input transform  
    in_double = (double*) fftw_malloc(sizeof(double) * N);
    out_double = (double*) fftw_malloc(sizeof(double) * N);
    out_complex = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
    in_complex = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
    // create a plan, an object that containsa all the data FFTW needs to compute the FFT.
    // 4th argument is unsigned flag. 
    // There is no sign argument
    // r2c DFTs are always FFTW_FORWARD
    // c2r DFTs are always FFTW_BACKWARD
    // real input to complex-Hermitian output (r2c) transform
    p_r2c = fftw_plan_dft_r2c_1d(N, in_double, out_complex, FFTW_MEASURE);
    // complex-Hermitian input to real output (c2r) transform.
    p_c2r = fftw_plan_dft_c2r_1d(N, in_complex, out_double, FFTW_MEASURE);
    
    fftw_execute(p_r2c); /* real to complex */
    fftw_execute(p_c2r); /* complex to real */
    
    // deallocate plan and in and out arrays
    fftw_destroy_plan(p_r2c);
    fftw_destroy_plan(p_c2r);
    fftw_free(in_double); fftw_free(out_complex);
    fftw_free(out_double); fftw_free(in_complex);

}
