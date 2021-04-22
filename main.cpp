//Author: Tyler Munstock
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

//Problems:
//For Loop iterates once through before allowing cin (L: 39-42).
    //This problem causes our final cout statement to print an endLine before printing any colors/words.
//UniqueColors Function only works if colors are repeated immediately after one another (L: 76-102).

/*
This Program should do the following:
- Ask User to number of colors to be inputted, such that x > 1
- 
*/
int main()
{
  //Member Variables 
  vector<string> colorList;
  int numberOfColors;
  string color;
  string file;

  //Declaring Functions
  bool UniqueColors(vector<string> uniqueColorList, string evaluatedColor);
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
  for(int i = 0; i < numberOfColors; i++)
  {
    cout << "Please Enter a color." << endl;
    getline(cin, color);

    //At the end of the list, endLine to make the Console look cleaner
    if(i == numberOfColors - 1)
    {
      cout << endl;
    }
  
    //After the User Inputs a Color, we want to then check if it's Unique
    if(UniqueColors(colorList, color) == true)
    {
      //If Not Unique, we remove it from the List
      colorList.pop_back();
      //But we dont want to remove both instances of the color
      //So we immediately re-add the color to the end of the list
      colorList.push_back(color);
    }
    else
    {
      //If Unique, we add it to the end of the List
      colorList.push_back(color);
    }
  }

  //After asking for all of the Users Colors
  //We want to Create a File and Write to it
  CreateAndStoredColors(colorList, file);

  //We Print out the Unique Colors
  cout << "Your Unique Colors Are: " << endl;
  for(int i = 0; i < colorList.size(); i++)
  {
    //colorList[i] = isupper(color[i]);
    cout << colorList[i] << endl;
  }
  return 0;
}

//This function will determine if a Color is Unique or Not  
//This function should run every time the user inputs a color.
bool UniqueColors(vector<string> uniqueColorList, string evaluatedColor)
{
  //Used to determine if a color is Unique or Not
  int evaluation;

  //Iterate through every input and see if our 
  //evaluatedColor matches anything in the List
  for(int i = 0; i < uniqueColorList.size(); i++)
  {
    if(uniqueColorList[i] == evaluatedColor)
    {
      //Found Duplicate, set evaluation to 1
      evaluation = 1;
    }
    else
    {
      //Did Not Find Duplicate, set evaluation to 0
      evaluation = 0;
    }
  }
  //If our evaluation equals 1, return the function as true
  //If not, we return the function as false
  //Also, we don't use curly brackets here to not get the green squiggly line under the brace at the end of this function, because every path of the function requires a return value of its declaration type (in this case of Type bool)
  if (evaluation == 1)
    return true; 
  else
    return false;
}

//This function will create a text file of the User's Choice
//And write their colorList to that newFile
  //NOTE:
  //CONST means constant, meaning the values that get placed into this vector<string> will remain CONSTANT and not change. The & is a Pass-By-Reference, which means it will gather the information from its reference, and hold that information.
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