# Homework 9, 11/17

## Latency hiding in three-point average

Look at the example Fortran and C++ code in the `hw9` directory of your assignments repo (be sure to pull from the `work` repo!). These codes implement a blocking ghost zone exchange for a 1D vector assuming periodic boundary conditions. The operation performed in parallel on the vector is a simple three-point rolling averaging.

1. With your group, come up with a design plan for how to adapt this code to implement "latency hiding." By this we mean to overlap communication and calculation by posting non-blocking communication calls, then instead of waiting for those calls to complete, going ahead and perform all calculations that do not depend on the data being communicated.
2. Now, go ahead with implementing a latency-hiding version of the three point averaging function. Check that your code works and gives the correct result on 1, 2, and 4 processors.
3. Compare the performance of the non-blocking version of the code to the blocking version of the code for up to 200 ranks keeping the array size per-rank fixed. 

## Latency hiding with one-sided MPI 

1. Modify your three-point averaging code to use one-sided MPI communication to achieve the halo exchanges.
2. Implement overlapping communication and calculation then be sure to correctly handle computing the "boundary" values that depend on halo data.
3. Verify that you get sensible results for arbitrary number of processors and global array sizes.
4. Compare the relative performance of the non-blocking and one-sided versions of your three-point averaging code for up to 200 ranks keeping the array size per-rank fixed. 

## What to turn-in

To your git repo, in the `hw9` directory, commit your final, working code for both the non-blocking and one-sided three-point averaging. Also commit a PDF describing the relative performance of the codes including plots. Your final code and write-up is due in one week, on 11/17.
