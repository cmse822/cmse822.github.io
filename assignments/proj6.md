# Project 6: OpenMP Offloading

In this project, you will gain experience with using OpenMP 4.5 and above for offloading calculation to GPUs.

# Part 1: Warm-up

Take a look at the `HelloOffload.cpp` code in the project template repo. Log in to the `dev-amd20-v100` node of HPCC. Build and run this code to verify that you are able to use the V100 GPUs on AMD20. To do this, run `> module purge` then `>module load GCC/12.2.0` to load the most recent GCC version on HPCC. This version supports OpenMP Offloading features. 

# Part 2: Jacobi iteration

1. Clone Tim Mattson's ATPESC repo from here: https://github.com/tgmattso/ATPESC.git. Take a look at the Jacobi solver in the `Challenge_problems/GPU_Computing` directory. You may use this code as a starting point and guide for this project. Note that this repo _includes solutions_. Feel free to check the solutions but do try to implement things yourself first. 
2. Add OpenMP parallelism to this code for threaded execution _on the CPU only_. Explore the parallel performance of this code by varying the size of the problem and number of threads. Produce any necessary plots to demonstrate the parallel performance of your code.
3. Implement OpenMP offloading to GPU in your Jacobi code. The simplest approach is to use the `loop` construct. Run this on a single node on AMD20-V100 utilizing a single GPU. Explore using different directives and options to change the execution behavior and performance of the code on the GPU. 
4. Compare and contrast your results on the GPU with the CPU versions of the code. Discuss your results.