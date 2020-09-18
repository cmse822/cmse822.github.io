---
layout: default
title: HPCC Tutorial
---

# HPCC MSU Tutorial

## Connecting
Connect to the hpcc using ssh. For Linux and Mac this can be done natively from your terminal. For windows users, you need to install additional software. I would recommend one of the following for windows putty (simplest)or MobaXterm.

You can connect to a gateway node by using the command 
```
ssh -XY <username>@hpcc.msu.edu
```
Once you connect you should get a message similar to this 

          Development Nodes (usage)
      --------------------------------
    dev-intel14-k20.i (low) dev-intel14.i (low)
    dev-intel16-k80.i (low) dev-intel16.i (high)
    dev-intel18.i (high)

Once you connect a gateway node you need to then **connect to a development node before you compiler or run jobs**. Do so using ssh
```
ssh -XY dev-intel<type>
```
Nodes with a kXX have access to GPUs. The high or low flag specifies how stressed the nodes are since these are shared resources.


A good place to find information about the hpcc is at https://wiki.hpcc.msu.edu/.

## Compiling
### Modules
The default compilers that are loaded are GNU and OpenMPI. Therefore you should not need to load any modules unless you want to use a different compiler suite. Information on the different modules that are available for compilers is found at https://wiki.hpcc.msu.edu/display/ITH/Compilers+and+Libraries. 
To load a module simply type
```
module load <name of module>
#or
ml <name of module>
```
To unload a module 
```
module unload <name of module>
```
To unload all modules
```
module purge
```

### Compilers
We will be using either C, C++, or Fortran during this class. The GNU compilers for these languages are gcc, g++ and gfortran. To compile programs to use openmp you must add the compiler flat `-fopenmp` when compiling. To use MPI you must use a compiler wrapper that is built for MPI. These compilers are mpicc, mpic++ and mpif90. The same compiler flags for openmp can be used for these compilers. 
Examples:
```
# Serial C program
gcc myserial.c

# Openmp parallel C++ program
g++ -fopenmp myopenmp.cpp

# Openmp and MPI fortran program
mpif90 -fopenmp myhybrid.f
```
For more information see https://wiki.hpcc.msu.edu/display/ITH/Compilers+and+Libraries

## Job Submission
The hpcc uses slurm for job submission. **Before you submit a job log into a dev node from the gateway node.** Jobs can be submitted using the sbatch command, details of which can be found at https://wiki.hpcc.msu.edu/display/ITH/Job+Script+and+Job+Submission. There is also the option to submit an interactive job. This gives you a shell where you can interactively run and compile things using the requested resources. It can be extremely helpful when debugging your programs. To get an interactive job use the salloc command, details of which are found at https://wiki.hpcc.msu.edu/display/ITH/Interactive+Job. 
To get a list of what jobs you have running or in the queue run
```
squeue -u <username>
```

## .bachrc
If you find that you are putting in the same commands over and over you can add them to the end of your ~/.bashrc file. This will run every time you log into a node. You can also alias commands by adding `alias new_name="command to run"`. For example, you can add the alias `alias me="squeue -u <my_user_name>"` so that you can type `me` to get all of your running jobs.