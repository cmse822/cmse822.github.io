# Homework Project: MPI Ping-Pong Analysis

## Background

The ping-pong problem is a benchmark often used to evaluate the performance of message passing interfaces (MPI) in parallel computing. In this problem, two processes exchange messages back and forth a specified number of times, with each process sending a message and receiving a message alternately.

## Task

Your task is to implement the ping-pong problem using MPI in C or C++ and analyze the behavior and performance of your code. Specifically, you should:

1. Implement the ping-pong problem using MPI in C or C++. You should define the number of iterations and the size of the message to be exchanged.
2. Measure the time taken to complete the ping-pong exchange for different message sizes and numbers of iterations. You should use the MPI_Wtime() function to obtain the time before and after the exchange and calculate the elapsed time.
3. Record the total number of messages sent and received during the ping-pong exchange for each configuration.
4. Plot the elapsed time as a function of the message size and the number of iterations.
5. Analyze your results and discuss the impact of the message size and the number of iterations on the performance of the ping-pong exchange.
6. Re-implemt using non-blocking sends and receives.

## Requirements

Your implementation should use the MPI_Send() and MPI_Recv() functions to exchange messages between the two processes. You should use the MPI_Comm_rank() and MPI_Comm_size() functions to identify the two processes and obtain the total number of processes.

Your analysis should be presented in a report in PDF format, which should include:

- Introduction: brief description of the ping-pong problem and the purpose of the analysis.
- Methodology: description of the implementation and the measurement methodology.
- Results: tables and plots showing the elapsed time, the number of messages, and any other relevant metrics for each configuration tested.
- Discussion: analysis of the results and discussion of the impact of the message size and the number of iterations on the performance of the ping-pong exchange.
- Conclusion: summary of the main findings and future work.

## Submission

You should submit your report in PDF format and your source code in a compressed file (zip or tar.gz) to the course instructor by the due date specified in the syllabus. Your source code should include a Makefile or other build instructions to compile and run your program. Your report should be well-written, organized, and free of errors. Your source code should be well-documented and easy to read.

## Grading

Your homework project will be graded based on the following criteria:

- Correctness of the implementation (30%)
- Quality of the analysis (40%)
- Clarity and organization of the report (20%)
- Quality and style of the source code (10%)

Good luck!
