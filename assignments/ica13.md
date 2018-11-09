# In-class Assignment 13, 11/6

## OpenMP Matrix-Matrix Multiplication

Consider the simple matrix-matrix multiplication,

```C
for i = 1, N
  for j = 1, N
    for k = 1, N
      C[i,j] += A[i,k] * B[k,j]
```

What strategies could you use to add parallelism using OpenMP threading to this kernel? Is each of the three loops threadable?

Now, let's implement so OpenMP loop parallelism.

1. Modify your MMM code from ICA2 to implement OpenMP threading by adding appropriate compiler directives the outer loop of the MMM kernel. Be sure to remove any MPI parallelism from your old code. When compiling the OpenMP version of your code be sure to include the appropriate compiler flag (`-fopenmp`).
2. Compute the time-to-solution of your MMM code for 1 thread (e.g., `export OMP_NUM_THREADS=1`) to the non-OpenMP version (i.e., compiled without the `-fopenmp` flag). Any matrix size `N` will do here. Does it perform as you expect? If not, consider the OpenMP directives you are using.
3. Perform a thread-to-thread speedup study of your MMM code either on your laptop or HPCC. Compute the total time to solution for a few thread counts (in powers of 2): `1,2,4,...T`, where T is the maximum number of threads available on the machine you are using. Do this for matrix sizes of `N=20,100,1000`.
4. Plot the times-to-solution for the MMM for each value of `N` separately as functions of the the thread count `T`. Compare the scaling of the MMM for different matrix dimensions.

You may wish to refer to the excellent OpenMP resource pages at <https://computing.llnl.gov/tutorials/openMP/>.

## What to turn in

To your git repo, in the `ica13` directory, commit your final, working code for the above exercises, responses to the questions, and your scaling plot. Your final writeup is due on 11/13.