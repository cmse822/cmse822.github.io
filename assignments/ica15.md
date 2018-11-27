# In-class Assignment 15, 11/27

## OpenMP SIMD Directives

1. Start from your Matrix-Matrix multiplication code from previous assignments. Compile the code with flags set to get optimization reports. For the GNU compilers, these flags are `-fopt-info` and `-fopt-info-all`, the latter being far more verbose. Compile your code with varying levels of optimization, `-O0`, `-O2`, `-O3`. Look at the output of the optimization reports and study how the optimizations change. Is the inner most loop of the matrix multiply vectorized automatically by the compiler? Another handy compiler flag for GNU is `-fopt-info-missed`. This will tell you what optimizations the compiler did _not_ do and why. To check for loop vectorization, try `-ftree-vectorizer-verbose=2`.
2. Now, add OpenMP SIMD directives to the inner loop and repeat the investigation from above. Be sure to include the `-fopenmp` compiler flag on GNU. Think carefully about how to correctly use the SIMD directives. Are any clauses needed? Do you need to re-write the loop somehow to ensure correct vectorization? 
3. Now try to _break_ vectorization. Place the body of the inner most loop (essentially just the ` C += A*B` par) in separate function so that the compiler chooses _not_ to vectorize the innermost loop. Review the optimization reports to verify the compiler is not vectorizing that loop and check that the performance of the code is indeed reduced. 
4. Use the `omp simd declare` directives to make this function vectorizable. Again, use the optimization reports to check this and verify that you see an increase in performance.

## What to turn in

To your git repo, in the `ica15` directory, commit your working code for the above exercise. Your code is due on 12/4.