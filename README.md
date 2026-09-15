# Factorial Using Stacks

## Project Overview

This project implements the Data Structures and Algorithm Task Two question provided in the question paper.

The program calculates factorials from `1!` up to `n!` and demonstrates the use of a stack using two approaches:

- Forward stack
- Backward stack


**Algorithms are provided in ALGORITHM.md.


**The stack data structure and its real-life applications are explained in 'STACK.md'.


**The factorial is implemented using forward and backward stacks in 'main.cpp'.

## Example

If the user enters:


5


the program calculates:

text
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120


## Technologies Used

- C++
- Standard Template Library (STL)
- stack

## C++ Concepts Used

- Functions
- Loops
- Conditional statements
- stack
- LIFO
- Input validation
- Comments

## How to Run

Compile using:


g++ main.cpp -o factorial_stack


On Windows:


factorial_stack.exe


On Linux/macOS:

./factorial_stack


## Project Structure


data-structures-factorials
|
|-- main.cpp
|-- ALGORITHM.md
|-- STACK.md
|-- IMPLEMENTATION.md
`-- README.md


## Author

**Gloria Magoma Karani**


The program uses `long long` and therefore limits n to 20 because factorial values grow very quickly.
