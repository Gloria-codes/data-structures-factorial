Factorial Using Forward and Backward Stacks

## Forward Stack

The program pushes numbers from 1 up to n.

For n = 5:


1, 2, 3, 4, 5


The factorial is calculated as:

1! = 1
2! = 2
3! = 6
4! = 24
5! = 120


The stack is then emptied to demonstrate the LIFO rule.

## Backward Stack

The program pushes numbers from n down to 1.

For n = 5:


5, 4, 3, 2, 1


Because a stack follows LIFO, the numbers are popped as:


1, 2, 3, 4, 5


The factorial is then calculated while the values are popped.

