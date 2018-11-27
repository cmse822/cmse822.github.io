# Pre-class Assignment 18, due 11/27

## Lecture on OpenMP SIMD Directives

Watch the lecture on OpenMP SIMD directives given at the Argonne Training Program in Extreme Scale Computing [here](https://www.youtube.com/watch?v=\_OJmxi4-twY). You should follow along and review the slides for the talk, available [here](https://www.youtube.com/redirect?redir\_token=xxyh5lhSWh36ofqjrTbeZWZQODN8MTU0MjgwODg3OUAxNTQyNzIyNDc5&q=http%3A%2F%2Fextremecomputingtraining.anl.gov%2Ffiles%2F2016%2F07%2FReinders\_1300.pdf&event=video\_description&v=\_OJmxi4-twY).

## Review

1. Write up a list of the key points from the reading.
2. What questions do you have about the subject material covered in the reading?

## Questions 

1. Consider the following simple loop.

```C
void v_add (float *c, float *a, float *b)
{
    for (int i = 0; i <= MAX; i++)
       c[i] = a[i] + b[i];
}
```

Is this loop SIMD-vectorizable automatically by the compiler? Why or why not?

2. Can functions called within an OpenMP parallel region be vectorized? Explain your answer.

## What to turn-in

Commit your write-up as a plain text, markdown document, or pdf to your assignment repo _before the start of class_.
