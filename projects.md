# Final Projects

## Project topics

You will complete one of the parallel programming and analysis projects below. For _all_ project topics, you must address or satisfy all of the following.

- Combine two _different_ parallel programming models: distributed memory (i.e., MPI), shared memory (i.e., OpenMP), GPUs (i.e., CUDA, Kokkos, or OpenMP Offloading).
- Explore different parallelization strategies (i.e., domain decomposition, task-based, etc.).
- Develop a _verification_ test to ensure the correctness of your solution. Ensure that the solution does not change with the number of parallel tasks.
- Address load balancing and strategies for maintaining balance as tasks are increased.
- Address memory usage and how it scales with tasks for your problem.
- Perform extensive scaling studies (i.e., weak, strong, thread-to-thread speedup). Your scaling studies should extend to as large a number of tasks as you are able to with your problem.
<!-- - All I/O should be handled with HDF5. -->

Note that for many of these project topics, parallel code can easily be obtained online. _You must develop your own original code to address your problem_. Researching your problem on the web is expected and encouraged, but I recommend you avoid looking directly at someone's code for inspiration.

Final project reports will be graded based on [this rubric](assets/projectRubric.pdf).

### 1. Heat Equation

See Section 31.3 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 2. Poisson Equation

See Section 4.2.2 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 3. Conjugate Gradient

See Section 5.5.11 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 4. Gaussian Elimination

See Section 5.1 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 5. Molecular Dynamics

See Chapter 7 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 6. Sorting and Combinatorics

See Chapter 8 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 7. Graph analytics

See Chapter 9 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 8. N-body Simulation

See Chapter 10 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 9. Monte Carlo Transport

See Chapter 11 of [HPSC](assets/EijkhoutIntroToHPC2020.pdf).

### 10. Machine Learning

Open topic! Any reasonable approach to implementing a ML algorithm in parallel, satisfying the criteria laid out above, is good.

## Project Reports

You will prepare and submit a report detailing your project, code, and results. The reports will be graded according to [this rubric](assets/projectRubric.pdf).

<!-- ## Project video

As part of your final project submission, you will prepare and record at 10 minute video lecture with slides summarizing your project and results.  -->