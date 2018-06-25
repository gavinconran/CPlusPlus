// complex multi dimensional DFT
// $ gcc -o exp01 01_complexMultiDimDFT.cpp -lfftw3 -lm

#include <fftw3.h>
#include <iostream>

using namespace std;

int main()
{

    // allocate input and output arrays
    fftw_complex *in2, *out2; // 2d arrays
    fftw_complex *in3, *out3; // 3d arrays
    fftw_plan p2; // 2d plan
    fftw_plan p3; // 3d plan

    // transforms operate on contiguous arrays in the C-standard row-major order
    int rows = 2; // no. of rows 
    int cols = 3; // no. of cols
    int depth = 4; 
    // Pointers to the input and output arrays of the transform
    // These pointers can be equal, indicating an in-place transform. 
    in2 = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * rows * cols);
    out2 = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * rows * cols);

    in3 = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * rows * cols * depth);
    out3 = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * rows * cols * depth);
    // create a plan, an object that containsa all the data FFTW needs to compute the FFT.
    // FFTW_FORWARD (-1) is the 'sign' and indicates the direaction of the transform 
    // FFTW_MEASURE: run and measure the execution time of sveral FFTs to find best way to compte transform
    // FFTW_ESTIMATE: does not run any computation and builds a plan which is probably sub-optimal.
    p2 = fftw_plan_dft_2d(rows, cols, in2, out2, FFTW_FORWARD, FFTW_MEASURE);
    p3 = fftw_plan_dft_3d(rows, cols, depth, in3, out3, FFTW_FORWARD, FFTW_MEASURE);
    
    fftw_execute(p2); /* repeat as needed */
    fftw_execute(p3); /* repeat as needed */
    
    // deallocate plan and in and out arrays
    fftw_destroy_plan(p2);
    fftw_destroy_plan(p3);
    fftw_free(in2); fftw_free(out2);
    fftw_free(in3); fftw_free(out3);

}
