# ColorVisionProject_Munstock_Tyler

## Description

In this current iteration of the program. I currently am asking the User to input the amount of colors they would like to input, so that the number they chose was greater than one. After choosing a valid number. I ask the User that many times to enter a color, after all colors have been inputted, the user is then prompted to create a name for a file in which their uniquely listed colors will appear.

### v0.2 Updates

In this iteration of the Color Vision Program. I had changed up a few things, first off I had cleaned up my code to make it run more efficiently as well as appearing more coder-friendly (adding more comments, cleaner code, etc). Secondly, I had changed the information I gather from the User, instead of gathering hexidecimal data from the user and converting it to a color. I am doing to opposite, I am not gathering colors from the users (cin) and then converting those colors to hexidecimal for further use. I have created two functions, one called UniqueColor and one called CreateAndStoredColors. UniqueColor will evaluate the colors within a Vector I had created and checks whether or not the current input matches any of the previous inputs, if so it deletes one of the duplicate inputs. CreateAndStoredColors is a function that allows the User to create a new text file, where their Unique List of selected colors will be.
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
Number of Colors: 1

That number is not greater than 1, please pick a number that is 2 or higher.
Enter the number of colors you would like to input. Please pick a number greater than 1.
Number of Colors: 5

Please Enter a color.
Please Enter a color.
blue
Please Enter a color.
red
Please Enter a color.
red
Please Enter a color.
green

Store your List on a seperate, organized file. 
Enter a name you'd like for your file.
MyUniqueColors  

Your Unique Colors Are: 

blue
red
green
```

## C++ Guide

### Variables and Data Types

**In Main:***
  *vector<string> colorList;*
 *int numberOfColors;*
  *string color;*
  *string file;*

**In UniqueColor:**
  *int evaluation;*

### Console Input and Output
Console asks for User Input for the number of colors they would like to select. Next the Console asks the User to Input a color, and we keep asking the user this until they have inputted the number of colors they had originally chosen. Finally the console asks the User to input a name for a file in which all of their colors will be saved too. After entering the name for their file. The Console outputs all of the Users Unique Colors.


### Decisions

*DoWhile Loop:* If the User inputs a number less than 2 when selecting the amount of colors they would like to select, we ask the user to try again and remind them to input a number greater than or equal to 2.

*ForLoop:* After the User inputs a valid number for selecting colors. We run through a for loop, having the user continously decide on new colors to input until the number of colors they have inputted, equals the number of colors the user wished to input.

*OfStream:* Allows the user to name their created file.

### Iteration

*ForLoop1(In Main):* After the User inputs a valid number for selecting colors. We run through a for loop, having the user continously decide on new colors to input until the number of colors they have inputted, equals the number of colors the user wished to input.

*ForLoop2(In Main):* After the Program was run and the Console has gathered all of the needed User Input. The Console will then print out all of the Users Unique Colors they had inputted. 

*ForLoop3(In UniqueColor):* After a color has been inputted the UniqueColor Function is ran, which will use the inputted color as the Evaluated Color, and by iterating through every other item within that List of Colors, we can determine whether or not the Evaluated Color is Unique or Not.

*ForLoop4(In CreateAndStoredColors):* After the Program was run and the Console has gathered all of its information from the User. The ForLoop in this Function will iterate through itself printing every item from the ColorList to the New File.

### File Input and Output

By using OfStream within my CreateAndStoredColors Function, I allow the user to create their own Text File that will store every Unique Color from the List of Colors created in Main.

### Arrays/Vectors

  *vector<string> colorList;*
    This Vector stores a List of strings that is inputted by the user that is manipulated by the two functions (UniqueColor & CreateAndStoredColors). See below for information on the two Functions.

### Functions
*bool UniqueColors(vector<string> uniqueColorList, string evaluatedColor);*
  UniqueColors will evaluate every color that the user inputs and run it through a list of every other item already inputted. If the forLoop finds a match, meaning the function found a duplicate color, we will delete that duplicate color from the colorList, if the loop is able to get through the entire list, that means we have not found a match and the function will then add that color to the colorList.
  **Current Limitation:** Only works if colors are repeated one after another.
   (Example: Inputting - Red, Red, Green will only Output Red, Green but Inputting - Red, Green, Red will output all three inputs)

*void CreateAndStoredColors(const vector<string> & uniqueColorList, string fileName);*
  CreateAndStoredColors will create a new text file and store every unique color to that new file. By asking the user for a name for this file we then create a file based off of the User's input. Then we print every unique color to that new file for the User to keep.

### Classes

*Coming in version 1.0*
