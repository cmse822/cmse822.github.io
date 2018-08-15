---
layout: default
title: Coding Standards
---

# Coding Standards

This page contains the coding standards for this course. The purpose of these standards is to create code and documentation that is well-structured and easy to understand, which will help with the debugging, testing, and maintenance of your code. These standards are based on those for CMSE 201, but modified somewhat to reflect the needs of this class.

--------------------------------------------------------------------------------

## Overriding principle for this coding standard

There is a saying that is popular among professional software developers, which we hope you will take to heart in both this course and in the rest of your professional life:

"Always code as if the guy who ends up maintaining your code will
 be an axe-wielding maniac who knows where you live."

In other words, write and document your code so that it is easy to read and easy to understand. This is critical in the era of open-source scientific software - it helps others use (and reuse) your code, and it also helps YOU do the same when you return to your code months after you've last looked at it.

--------------------------------------------------------------------------------

## Source code format

Source code lines should be no more than 79 characters long. Break long lines into shorter lines using the continuation character.

Only one statement should be included on a given line of source code - do not put multiple statements in a single line!

Use blank spaces and blank lines to enhance readability of both source statements and comments. Note that it's possible to have too much whitespace, which decreases readability of the code - consult reference [2] to see some examples.

For Python, use four spaces for indentation - do NOT use tabs. You can typically get your editor (emacs, vi, nano) to use spaces instead of tabs - consult Google for instructions.

Control structures should not be nested too deeply. If the clarity of the source code is impaired by too many levels of nesting, the statements that are nested most deeply should be removed and placed in a separate function.

Individual functions should not be excessively long (many hundreds of lines or more) to promote clarity. Break long functions up into smaller functions whenever possible (but not to the point where clarity is lost).

--------------------------------------------------------------------------------

## Naming conventions

All functions, variables, and classes should have names that clearly describe their purpose and that are not duplicated (i.e., a name should be used for only one purpose, and not for both a variable AND a function).

Variables should be named with the "lower with under" style - lower-case letters with underscores between words. For example, "car_count" is an appropriate name. When variables are defined, a brief comment should be added explaining what the variable does. For example:

car_count = 0 # keeps track of cars entering intersection

Symbolic constants (e.g., physical constants and other constants) should be used instead of embedding arbitrary constants in the source code. Use the same convention as variables, but use all caps. For example:

``` C++
BOLTZMANN_CONSTANT = 1.38e-23  // Boltzmann's constant in Joules/Kelvin
```

and then statements using it would look like this:

``` C++
energy = BOLTZMANN_CONSTANT * my_temp
```

Function definitions should use the same naming convention as variables (the "lower with under" style).

Class names should use the "CamelCase" style:

``` C++
class RocketShipEngine
```

--------------------------------------------------------------------------------

## Descriptive comments

Your source code must include comments that describe the functionality of all classes, functions, and significant blocks of code. Not every line must be commented, but any block of code that does something substantial (significant data or file manipulation, error processing, etc.) must be commented. Note that comments should typically be just before the code in question, and not appended after the end of the line unless the comment is VERY short.

Every source code file must include an introductory block of comments that describes the contents of the file and gives a brief overview of what the contents do. This should be done using the appropriate comment character, and every line should start with a comment character and a space. For example:

``` C++
/*
File contains functions for unit conversion

This includes the following routines:
cm_to_parsecs, which converts centimeters to parsecs
oz_to_solar_masses, which converts ounces to solar masses
sec_to_millennium, which converts seconds to millennia
*/
```

Every function should use docstrings (delimited by triple double-quotes) and must including an introductory block of comments that explains the purpose of the function and describes all information passed to the function and returned by it, including parameters and data objects. For example:

``` Python
def count_cars( intersection_number, start_time, stop_time ): """ Counts the number of cars passing through an intersection.

Receive: an integer describing the intersection number (intersection_number), as well as the floating-point times to start and stop counting (start_time, stop_time) Return: the number of cars that pass through the intersection in that time (an integer).<br>
"""
```

--------------------------------------------------------------------------------

### Useful References

[1] <http://www.cse.msu.edu/~cse231/General/coding.standard.html>  
[2] <http://www.python.org/dev/peps/pep-0008/>
