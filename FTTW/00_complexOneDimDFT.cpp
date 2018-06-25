// The basic usage of FFTW to compute a one-dimensional DFT of size N is simple
// http://www.fftw.org/fftw3_doc/Complex-One_002dDimensional-DFTs.html#Complex-One_002dDimensional-DFTs

// Code must be linked with the fftw3 library. Link using -lfftw3 -lm (must be after file names)
// $ gcc -o exp00 00_complexOneDimDFT.cpp -lfftw3 -lm

#include <fftw3.h>
#include <iostream>

using namespace std;

int main()
{

    // allocate input and output arrays
    fftw_complex *in, *out;
    fftw_plan p;

    int N = 10; // size of the transform   
    // Pointers to the input and output arrays of the transform
    // These pointers can be equal, indicating an in-place transform. 
    in = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
    out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
    // create a plan, an object that containsa all the data FFTW needs to compute the FFT.
    // FFTW_FORWARD (-1) is the 'sign' and indicates the direaction of the transform 
    // FFTW_MEASURE: run and measure the execution time of sveral FFTs to find best way to compte transform
    // FFTW_ESTIMATE: does not run any computation and builds a plan which is probably sub-optimal.
    p = fftw_plan_dft_1d(N, in, out, FFTW_FORWARD, FFTW_MEASURE);
    
    fftw_execute(p); /* repeat as needed */
    
    // deallocate plan and in and out arrays
    fftw_destroy_plan(p);
    fftw_free(in); fftw_free(out);

}
