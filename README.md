# ColorVisionProject_Munstock_Tyler

## Description

In this current iteration of the program. I currently am asking the User to input the amount of colors they would like to input, so that the number they chose was greater than one. After choosing a valid number. I ask the User that many times to enter a value between 0 and 255 (hexidecimal values) that will later be used and converted into colors.

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Tyler Munstock

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Enter the number of colors you would like to input. Please pick a number greater than 1.
5
Pick a number between 0 and 255.(0)
0
Pick a number between 0 and 255.(1)
255
Pick a number between 0 and 255.(2)
100
Pick a number between 0 and 255.(3)
45
Pick a number between 0 and 255.(4)
90
```

## C++ Guide

### Variables and Data Types

Current List of Variables:

  int numberOfColors;
  int colorArr[0];
  int hxdColorValue;
  int forLoopCounter;
  string userDecision;

### Console Input and Output

Through asking the User for the exact number of colors they would like to be evaluating and giving Users the option to any color at their disposal.

### Decisions

With a variety of ForLoops. We can determine if the User has inputted a number greater than 1, and if they have inputted a valid Hexidecimal Value for each of their color inputs.

### Iteration

By iterating through a ForLoop we can go through every color the user wishes to input.

### File Input and Output

!!!Replace with a summary and examples of how input and/or output of files have been used effectively and appropriately!!!

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
