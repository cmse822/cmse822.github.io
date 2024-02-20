# Project 3: MPI Ping-Pong and Ring Shift

## Background

The ping-pong problem is a benchmark often used to evaluate the performance of message passing interfaces (MPI) in parallel computing. In this problem, two processes exchange messages back and forth a specified number of times, with each process sending a message and receiving a message alternately. In the ping-pong, process `i` sends a message of size `m` to process `j`, then receives a message of size `m` back from `j`. The values of `i`, `j`, and `m` to use are given below.

The "ring shift" problem is similar to ping-pong. In the MPI ring shift, a group of processes is arranged in a ring, with each process holding a unique subset of a larger array of data. The goal is to shift the data elements by a specified number of positions around the ring, wrapping around the ends of the ring as necessary. 

## Part 1: Blocking Ping-Pong

Your task is to implement the ping-pong problem using MPI in C or C++ and analyze the behavior and performance of your code. Specifically, you should:

1. Implement the ping-pong problem using MPI in C or C++. Use blocking `MPI_Send()` and `MPI_Recv()` calls. You should define the number of iterations and the size of the message to be exchanged.
2. Measure the time taken to complete the ping-pong exchange for different message sizes. You should use the `MPI_Wtime()` function to obtain the time before and after the exchange and calculate the elapsed time. Vary the message size from 2 bytes to 4 kilobytes in powers of 2 (i.e., 2 bytes, 4 bytes, 8 bytes,..., 2048 bytes, 4096 bytes). For each message size, perform 100 iterations of the ping-pong to build up statistical significance.
3. Record the total amount of data sent and received during the ping-pong exchange for each configuration.
4. Repeat steps 2 and 3 but ensure that the 2 processes that are communicating reside on different physical hardware nodes on HPCC.
5. Plot the average communication time of a single exchange (send and receive) as a function of message size for the two cases. Using this plot, estimate the _latency_ and _bandwidth_ for each case. Are they different? Explain your results.
6. Analyze and discuss your results. Explain the behavior of the resulting curves.

## Part 2: Non-block Ping-Pong

Repeat Part 1 using non-blocking MPI communication, i.e., using `MPI_Isend()` and `MPI_Irecv()`. You will need to include explicit process synchronization using, e.g., `MPI_Wait()` calls. Compare the results to the blocking case.

## Part 3: MPI Ring Shift

1. Implement the MPI ring shift in C or C++ for an arbitrary number of processes in the ring and arbitrary message size (i.e., number of elements per process). In your implementation, use `MPI_Sendrecv()` instead of separate `MPI_Send()` and `MPI_Recv()` calls.
2. As in Parts 1 and 2, vary the message size from 2 bytes to 4 kb, in powers of 2. Also vary the number of processes used from 2 to `N`, in powers of 2, where `N` is sufficiently large that rank 0 and rank `N-1` are guaranteed to reside on separate nodes (`N` will depend on which cluster you are using on HPCC).
3. Compute the bandwidth and latency, as above. Plot the bandwidth as a function of message size. Include separate lines for each number of processes used. 
4. Analyze and discuss your results. Explain the behavior of the resulting curves.

## Part 4: Non-blocking MPI Ring Shift

Repeat Part 3 but using non-blocking communication via `MPI_Isendrecv()`. Compare the results to the blocking case.

## What to turn-in

To your git project repo, commit your final working code for the above exercises and a concise write-up including all plots, and detailed responses to the questions posed concerning your results. 
