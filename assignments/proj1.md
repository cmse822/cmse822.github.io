# Project 1

## Learning goals

- arithmetic intensity: how to compute; divides; memory access
- at least 2 different system architectures. Compare and contrast. 

## Coding problem

Within your group, pick a classmate to be the "driver" and do all the actual typing of the code. The driver should share their screen. The other group members will be "navigators," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your group mates, specifying your group number. 

1. With your group, write a program that multiplies two matrices together (see: <http://mathworld.wolfram.com/MatrixMultiplication.html>).

2. For a given matrix size _N_, what is the total number of floating point operations performed by this operator?

3. Using the supplied C routine `get_walltime.c`, compute the performance in Mflop/s of the matrix-matrix multiply for _N_=100\. Be sure to perform enough repeat calculations of the timing to overcome any statistical noise in the measurement.

4. For the system you are running on, determine the clock speed of the processor and the cache size/layout. Assuming that the processor is capable of one flop per clock cycle, how does the performance you measures in (3) compare to the theoretical peak performance of your system?

5. Now repeat the performance measurement for a range of matrix size `N` from 1 to 10,000,000. Make a plot of the resulting measured Gflop/s vs. `N`. On this plot place a horizontal line representing the theoretical peak performance based upon your system's clock speed.

6. How does the measured performance for multiple _N_'s compare to peak? Are there any "features" in your plot? Explain them in the context of the hardware architecture of your system. Include in your write-up a description of your system's architecture (processor, cache, etc.).

### What to turn-in

To your git repo, in the `hw1` directory, commit your code for performing the matrix-matrix multiply performance measurements, the plot of your results, and a brief write-up (in plain text or markdown) addressing the above questions and discussing your results. Your final write-up and code are due in one week, on 9/15.


## In-class problem

As a group, compute the arithmetic intensities of the following kernels assuming 8 bytes per float.

```C
  Y[j] += Y[j] + A[j][i] * B[i]
```

```C
  s += A[i] * A[i]
```

```C
  s += A[i] * B[i]
```

```C
  Y[i] = A[i] + C*B[i]
```

Within your group, pick a classmate to be the "driver" and do all the actual typing of the code. The driver should share their screen. The other group members will be "navigators," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your group mates, specifying your group number. 

1. Reference the materials on the Roofline Performance model at <https://crd.lbl.gov/departments/computer-science/PAR/research/roofline/>. In particular, look through ["Roofline: An Insightful Visual Performance Model for Floating-Point Programs and Multicore Architectures"](https://www2.eecs.berkeley.edu/Pubs/TechRpts/2008/EECS-2008-134.pdf) and the slides at <https://crd.lbl.gov/assets/pubs_presos/parlab08-roofline-talk.pdf>.
2. Clone the CS Roofline Toolkit, `git clone https://bitbucket.org/berkeleylab/cs-roofline-toolkit.git`, on your local machine. Modify one of the config files in `Empirical_Roofline_Tool-1.1.0/Config` as necessary for your local machine. NOTE: If your local machine uses Python3 by default (and it really should...) you will need to modify the Python scripts in the `Scripts` direction and the main `ert` program to use a Python2 environment. To do this, simply change the first line of all the `*.py` files and `ert` to `#!/usr/bin/env python2`.
3. Run the ERT in serial mode on your local machine. Report the peak performances and bandwidths (for all caches levels as well as DRAM). Where is the "ridge point" of the roofline for the various cases?
4. Consider the four FP kernels in "Roofline: An Insightful Visual Performance Model for Floating-Point Programs and Multicore Architectures" (see their Table 2). Assuming the high end of operational (i.e., "arithmetic") intensity, how would these kernels perform on your local machine? What optimization strategy would you recommend to increase performance of these kernels?

### What to turn-in

To your git repo, in the `hw2` directory, commit your  the plot of the roofline model for your local machine, and responses addressing the above questions. Your final write-up and plot are due in one week, on 9/22.
