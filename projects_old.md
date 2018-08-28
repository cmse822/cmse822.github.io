---
layout: default
title: Final Projects
---

# Final Projects

You will design and complete a final project for this class that involves parallel computation. Projects will be graded on how well they apply the principles that we've discussed in class to the project; it is not necessary to achieve substantial performance improvement in your project. Rather, you need to demonstrate an understanding of the performance of the code that you use in your project, and either demonstrate how to improve it or explain why it is difficult or impossible to improve the performance of that code.

You will be required to submit brief project abstracts for your project that succinctly describe the problem or algorithm and what you will do as part of this project. Projects could involve parallelizing a serial code using any parallel programming model you like or analyzing and optimizing the performance of an already parallel code. Some project ideas are given below.

Finally, you will prepare and submit a project report about five pages in length including figures and references that thoroughly describes what you have done in your project. Things to consider when carrying out your project and writing your report are:

1. What is your goal (e.g., better performance, better scalability, understanding the performance limits of a code)?
2. The source of the code. Does it already exist? Will you be writing it? How long is it/do you expect it to be? Provide a URL or reference to existing code.
3. How will you establish a performance baseline: the performance before you start to analyze or change the code. Where will you run the code and with what inputs? How will you measure the results?
4. How will you analyze (quantitatively) the performance of the code? You are encouraged to use the simplest approach possible.
5. What do you expect to do as a result of your analysis? Give a few examples. Your project should implement at least one modification to the code. Note that the specific changes will depend on what you learn during the project; this section is to show that you have some ideas that you will consider.
6. How will you compare the results that you measure with your analysis?

## Some project ideas

### Inspired by Numerical Linear Algebra

- Implement parallel gaussian elimination for solving large linear systems more quickly
- Implement a parallel version of GMRES (or any other iterative method they will learn about soon in Part VI of their textbook
- Implement this parallel partial SVD method for highly rectangular matrices (the method was just accepted for publication) <http://users.math.msu.edu/users/markiwen/Papers/distrib_inc_svd.pdf>
- (A RESEARCH PROJECT) Implement a parallel High order singular value decomposition method for higher order tensors based on the above referenced method.

### Inspired by plasma/astro physics

- Write a simple task manager for Enzo and/or Flash, using OpenMP (or for a standalone prototype/reference code)
- Experiment with the various threading libraries (OpenMP, QThreads, Intel Thread Building Blocks) to compare their relative performance for some simple algorithms (or, heck, complex algorithms).
- performance analysis of one of the PGAS languages (UPC, co-array Fortran, etc.) vs. MPI parallelization for some problem with interestingly complex communication. Something with particles would be interesting - maybe a simple PM or PIC code, if you can find a serial one.
