// Multi-Dimensional DFTs of Real Data
// $ gcc -o exp03 03_complexMultiDimDFT.cpp -lfftw3 -lm

// The plan routines work similarly to their complex analogues, 
// except for the fact that here the complex output array is cut roughly in half 
// and the real array requires padding for in-place transforms (as in 1d, earlier).

#include <fftw3.h>
#include <iostream>

using namespace std;

int main()
{

    // allocate input and output arrays
    double *in2, *in3; // 2d arrays
    fftw_complex *out2, *out3; // 3d arrays
    fftw_plan p_r2c_2d; // 2d plan
    fftw_plan p_r2c_3d; // 3d plan

    // transforms operate on contiguous arrays in the C-standard row-major order
    int rows = 2; // no. of rows 
    int cols = 3; // no. of cols
    int depth = 4; 
    // Pointers to the input and output arrays of the transform
    // These pointers can be equal, indicating an in-place transform. 
    in2 = (double*) fftw_malloc(sizeof(double) * rows * cols);
    out2 = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * rows * cols);

    in3 = (double*) fftw_malloc(sizeof(double) * rows * cols * depth);
    out3 = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * rows * cols * depth);
    // create a plan, an object that containsa all the data FFTW needs to compute the FFT.
    // FFTW_FORWARD (-1) is the 'sign' and indicates the direaction of the transform 
    // FFTW_MEASURE: run and measure the execution time of sveral FFTs to find best way to compte transform
    // FFTW_ESTIMATE: does not run any computation and builds a plan which is probably sub-optimal.
    p_r2c_2d = fftw_plan_dft_r2c_2d(rows, cols, in2, out2, FFTW_MEASURE);
    p_r2c_3d = fftw_plan_dft_r2c_3d(rows, cols, depth, in3, out3, FFTW_MEASURE);
    
    fftw_execute(p_r2c_2d); /* repeat as needed */
    fftw_execute(p_r2c_3d); /* repeat as needed */
    
    // deallocate plan and in and out arrays
    fftw_destroy_plan(p_r2c_2d);
    fftw_destroy_plan(p_r2c_3d);
    fftw_free(in2); fftw_free(out2);
    fftw_free(in3); fftw_free(out3);

}
