//Author: Tyler Munstock
#include <iostream>
using namespace std;

int main()
{
  //Member Variables 
  int numberOfColors;
  int colorArr[0];
  int hxdColorValue;
  int forLoopCounter;
  string userDecision;

  //Get user input on how many colors
  cout << "Enter the number of colors you would like to input. Please pick a number greater than 1." << endl;
  cin >> numberOfColors;

  //If they input a number less than 2
  if(numberOfColors < 2)
  {
    cout << "That number is not greater than 1, please pick a number that is 2 or higher." << endl;
    cin >> numberOfColors;
  }


  //Once getting a sufficient number of colors, we iterate through this forLoop
  //Gathering inputs for every colors until they have inputted the the numberOfColors
  //They inputted at the start.
  //We end the loop at numberOfColors - 1 because the console starts counting at 0, not 1.
  for(forLoopCounter = 0; forLoopCounter <= numberOfColors - 1; forLoopCounter++)
  {
    //We ask for a number between 0 and 255
    //And for Developer purposes, we are also displaying the value of numberOfColors everytime
    //This loop iterates.
    cout << "Pick a number between 0 and 255." << "(" << forLoopCounter << ")" << endl;
    cin >> hxdColorValue;
    //If a valid value is inputted
    if(hxdColorValue >= 0 && hxdColorValue <= 255)
    {
      //We add the value to the colorArray at the position of where ever "i" is located.
      colorArr[forLoopCounter] = hxdColorValue;
    }
    //If they input an invalid value
    else
    {
      //We ask the user again to input a value and decrement the iteration value (i)
      cout << "Invalid input, please input a number between 0 and 255." << endl;
      cin >> hxdColorValue;
      forLoopCounter--;
    }
    //When we reach the end of the loop we want to break out of it
    if(forLoopCounter > numberOfColors)
    {
      return 0;
    }
  }
  
  return 0;
}
