# In-Class Assignment 5, 9/20

## Calculate Pi with MPI

Within your group, pick a partner (or two). One partner will the be the "driver" and do all the actual typing of the code. The other partner (or two) will be the "navigator," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your partner, specifying who your partners were.

The value of pi can be computed as follows. Consider a circle of radius `r` inscribed in a square of side length `r`. Randomly generate points in the square. Determine the number of points in the square that are also in the circle. If `f=nc/ns` is the number of points in the circle divided by the number of points in the square then `pi` can be approximated as `pi ~ 4f`. Note that the more points generated, the better the approximation.

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

## In-class Exercise

1. Look at the C or Fortran program `ser_pi_calc`. Extend this program using collective MPI routines to compute `pi` in parallel using the method described above. Feel free to use C++, if you prefer, of course.
2. For the first iteration, perform the same number of "rounds" on each MPI rank. Measure the total runtime using `MPI_WTIME()`. Vary the number of ranks used from 1 to 4. How does the total runtime change?
3. Now, divide the number of "rounds" up amongst the number of ranks using the appropriate MPI routines to decide how to distribute the work. Again, run the program on 1 to 4 ranks. How does the runtime vary now?
4. Now let's change the number of "darts" and ranks. Use your MPI program to compute `pi` using total numbers of "darts" of 1E3, 1E6, and 1E9\. For each dart count perform a strong scaling study on HPCC with processor counts of 1, 2, 4, 8, 16, 32, and 64\. For this, use non-interactive jobs and modify the `jobsubmit.sb` script as necessary. Make a plot of your scaling results and turn it in along with your code. Give a brief explanation of your results and plot.

## What to turn-in

To your git repo, in the `ica5` directory, commit your final, working code for the above exercises, plot of your scaling study, and written responses. Your final write-up and code are due in one week, on 10/2.
