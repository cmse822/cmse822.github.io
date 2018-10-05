# In-Class Assignment 7, 10/4

## Latency hiding in three-point average

Look at the example Fortran and C++ code in the `ica7` directory of your assignments repo (be sure to pull from `assignmentsTemplate`!). These codes implement a blocking ghost zone exchange for a 1D vector assuming periodic boundary conditions. The operation performed in parallel on the vector is a simple three-point rolling averaging.

1. With your group, come up with a design plan for how to adapt this code to implement "latency hiding." By this we mean to overlap communication and calculation by posting non-blocking communication calls, then instead of waiting for those calls to complete, going ahead and performing all calculations that do not depend on the data being communicated.
2. Now, pick a partner and go ahead with implementing a latency-hiding version of the three point averaging function. Check that your code works and gives the correct result on 1, 2, and 4 processors.

## What to turn-in

To your git repo, in the `ica7` directory, commit your final, working code for the above exercises. Your final code is due in one week, on 10/11.
