# In-Class Assignment 4, 9/20

Within your group, pick a partner (or two). One partner will the be the "driver" and do all the actual typing of the code. The other partner (or two) will be the "navigator," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your partner, specifying who your partners were.

## Setup on HPCC 

1. Log in to the HPCC gateway:

```
$ ssh <netid>@hpcc.msu.edu
```

2. Then log in to the Intel-18 cluster from the gateway:

```
$ module load powertools
$ intel18
```

3. Now set up your environment and software stack by issuing the following commands.

```
$ module purge
$ module load gcc/7.3.0-2.30 openmpi hdf5 python git
``` 

4. When using the HPCC for development and exercises in this class _please do NOT just use the head node, `dev-intel18`_. We will swamp the node and no one will get anything done. Instead, request an interactive job using the SLURM scheduler. An easy way to do this is to set up an alias command like so:

```
$ alias devjob='salloc -n 4 --time 1:30:00'
```

5. Run `devjob`, then to request 4 tasks for 90 minutes. This should be sufficient for most of the stuff we do in class. The above `module` and `alias` commands can be added to your `.bashrc` so that they are automatically executed when you log in.

## MPI Basics

1. Clone your personal GitHub assignments repo on HPCC. 
2. Pull from the `assignmentsTemplate` repo to get the `ica4` material. 
3. In the `ica4` directory you will find three "Hello World!" source files in C, C++, and Fortran. Compile and run the code of your choice. E.g.,

```
$ g++ hello.cpp
$ ./a.out
``` 

4. Now run the executuable `a.out` using the MPI parallel run command and explain the output:

```
$ mpiexec -n 4 ./a.out 
```

5. Add the commands `MPI_Init` and `MPI_Finalize` to your code. Put three different print statements in your code: one before the init, one between init and finalize, and one after the finalize. Recompile and run the executable, both in serial and with `mpiexec`, and explain the output.
6. Complete Exercises 2.3, 2.4, and 2.5 in the Parallel Programing book.


## What to turn-in

To your git repo, in the `ica4` directory, commit your final, working code for the above exercises and responses addressing the above questions. Your final write-up and code are due in one week, on 9/27.
