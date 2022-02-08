# Speed Test

## Project Overview

The goal of the project is to bubble sort the same sets of unordered numbers in both Python and C++, time how long it takes each programming language to sort, and graph the results.

Since Python is interpreted and C++ is compiled, the only fair way to compare times is to include the C++ compile time in its runtime. Therefore, we will start the program in Python and Python will call C++. 

The Python file named `BubbleSort.py` includes the main program, which can be broken into three parts:
1. Run the bubble sort algorithm in Python and time how long it takes to sort.
1. Compile and run the C++ bubble sort algorithm and time how long it takes to sort.
1. Graph the runtimes.

