# In-class Assignment 12, 11/1

## Adding OpenMP threading to a simple MPI application

Take a look at the Hello World applications included in the assignment repo. These include MPI functionality. Modify one of these applications to include OpenMP. 

1. Wrap the print statements in an `omp parallel` region.
2. Make sure to modify the `MPI_Init` call accordingly to allow for threads! What level of thread support do you need?
3. Compile the code including the appropriate flag for OpenMP support. For a GCC-based MPI installation, this would be, e.g., `mpic++ -fopenmp hello.cpp`.
4. Run the code using 2 MPI ranks and 4 OpenMP threads per rank. To do this, prior to executing the run command, set the number of threads environment variable as `> export OMP_NUM_THREADS=4`. Then you can simply execute the application with the `mpirun` command: `> mpirun -n 2 ./a.out`.
5. Explain the output.

## What to turn in

Nothing!