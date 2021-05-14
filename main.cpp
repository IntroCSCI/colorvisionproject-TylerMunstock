//Author: Tyler Munstock
#include <iostream>
#include <vector>
#include <fstream>
#include "colors.h"
using namespace std;


int main()
{
  //Member Variables 
  Color colorInstance;
  vector<string> colorList;
  int numberOfColors;
  string color;
  string file;

  //Declaring Functions
  //bool UniqueColors(vector<string> uniqueColorList, string evaluatedColor);
  void CreateAndStoredColors(const vector<string> & uniqueColorList, string fileName);

  //Get user input on how many colors will be inputted
	do
  {
    cout << "Enter the number of colors you would like to input. Please pick a number greater than 1." << endl;
    cout << "Number of Colors: ";
    cin >> numberOfColors;

    //If they input a number less than 2
    if(numberOfColors < 2)
      {
       cout << endl << "That number is not greater than 1, please pick a number that is 2 or higher." << endl;
      }
  }while(numberOfColors < 2);

  //endLine to keep Console cleaner
  cout << endl;
	
  //Get User Input on Selected UniqueColors
  //We ask until the number of inputs equals the numberOfColors
  for(int i = 0; i < numberOfColors + 1; i++)
  {
    cout << "Please Enter a color." << endl;
    getline(cin, color);
		//Run UniqueColors from colors.cpp 
		colorInstance.UniqueColors(colorList, color);
		//Run AddColor from colors.cpp
		colorInstance.AddColor(color);


    //At the end of the list, endLine to make the Console look cleaner
    if(i == numberOfColors)
    {
      cout << endl;
    }
	}
	
  
  //After asking for all of the Users Colors
  //We want to Create a File and Write to it
  CreateAndStoredColors(colorList, file);

  //We Print out the Unique Colors
  cout << "Your Unique Colors Are: " << endl;
	colorInstance.PrintColors(colorList);
  
  return 0;
}

//This function will create a text file of the User's Choice
//And write their colorList to that newFile
void CreateAndStoredColors(const vector<string> & uniqueColorList, string fileName)
{
	//Creates a File with any name the User Inputs
  cout << "Store your List on a seperate, organized file. " << endl;
  cout << "Enter a name you'd like for your file." << endl;
  getline(cin, fileName);

  //Creates File (ofstream)
  ofstream newText(fileName + ".txt");

  //endLine after naming file to keep console clean
  cout << endl;

  //We want to write all of the information from our List to our newText file
  for(int i = 0; i < uniqueColorList.size(); i++)
  {
    //newText << (Writes to that newText file <--)
    newText << uniqueColorList[i] << endl;
  }

  //And when we're done with this file. We want to close it.
  newText.close();
}
