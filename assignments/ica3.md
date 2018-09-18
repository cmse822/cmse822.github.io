# In-Class Assignment 3, 9/11

## Exercises (15 min)

As a group, discuss the assigned exercises and decide which exercises you are most confident about. You _may_ be asked to explain the solution to the whole class.

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

Now, within your group, pick a partner (or two). One partner will the be the "driver" and do all the actual typing of the code. The other partner (or two) will be the "navigator," guiding the overall direction of the code toward the ultimate goal. Feel free to switch roles as frequently as needed. Feel free to discuss the programming problem with your other group mates, too. At the conclusion, you may submit identical code and write-ups as your partner, specifying who your partners were.

1. Reference the materials on the Roofline Performance model at <https://crd.lbl.gov/departments/computer-science/PAR/research/roofline/>. In particular, look through ["Roofline: An Insightful Visual Performance Model for Floating-Point Programs and Multicore Architectures"](https://www2.eecs.berkeley.edu/Pubs/TechRpts/2008/EECS-2008-134.pdf) and the slides at <https://crd.lbl.gov/assets/pubs_presos/parlab08-roofline-talk.pdf>.
2. Clone the CS Roofline Toolkit, `git clone https://bitbucket.org/berkeleylab/cs-roofline-toolkit.git`, on your local machine. Modify one of the config files in `Empirical_Roofline_Tool-1.1.0/Config` as necessary for your local machine. NOTE: If your local machine uses Python3 by default (and it really should...) you will need to modify the Python scripts in the `Scripts` direction and the main `ert` program to use a Python2 environment. To do this, simply change the first line of all the `*.py` files and `ert` to `#!/usr/bin/env python2`.
3. Run the ERT in serial mode on your local machine. Report the peak performances and bandwidths (for all caches levels as well as DRAM). Where is the "ridge point" of the roofline for the various cases?
4. Consider the four FP kernels in "Roofline: An Insightful Visual Performance Model for Floating-Point Programs and Multicore Architectures" (see their Table 2). Assuming the high end of operational (i.e., "arithmetic") intensity, how would these kernels perform on your local machine? What optimization strategy would you recommend to increase performance of these kernels?

### What to turn-in

To your git repo, in the `ica3` directory, commit your  the plot of the roofline model for your local machine, and responses addressing the above questions. Your final write-up and plot are due in one week, on 9/18.
