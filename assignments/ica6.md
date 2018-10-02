# In-Class Assignment 6, 10/2

## Ping Pong and Other Fun with MPI

In this homework, you will study the parallel performance of simple code that passes messages of varied size between different MPI ranks. You may find it useful to refer to the LLNL MPI tutorial: <https://computing.llnl.gov/tutorials/mpi/>.

In the pre-class assignment, you were tasked with writing a program using MPI that performs a simple "ping-pong" communication between two ranks using blocking sends and receives. In the ping-pong, process `i` sends a message of size `m` to process `j`, then receives a message of size `m` back from `j`. The values of `i`, `j`, and `m` to use are given below.

1. Measure the performance of the ping pong using the following test cases where `nranks` is the number of processes in `MPI_COMM_WORLD`. Make sure that you run on at least two nodes; the easiest way to do that is to place only one process per node.

- `nranks=40`, `i=0`, `j=nranks-1`; `m=2**k` bytes where `k` is an increasing integer array from 0 to 24. Other processes in `MPI_COMM_WORLD` are idle
- `nranks=41`, `i=0`, `j=nranks-1`; `m=2**k` bytes where `k` is an increasing integer array from 0 to 24. Other processes in `MPI_COMM_WORLD` are idle
  
Use non-interactive jobs submitted to the batch queue using SLURM. When you measure time for these operations, ensure that you (a) measure a long enough time to be significant (use `MPI_Wtime`) and (b) make 100 separate measurements for each test. Report the average time taken for the measurements.

1. Plot the time for communication of a single exchange (send and receive) as a function of message size for the two cases. Using this plot, estimate the _latency_ and _bandwidth_ for each case. Are they different? Explain your results.

2. Now modify your ping pong code to Use non-blocking `MPI_Isend`, `MPI_Irecv`, and `MPI_Wait`. Repeat the above performance study for the same number of ranks and various message sizes. Add these data to your plot and compare to the blocking communication case. Explain any differences between the results.

## What to turn-in

To your git repo, in the `ica6` directory, commit your final, working code for the above exercises, plot of your performance study, and written responses. Your final write-up and code are due in one week, on 10/9.
