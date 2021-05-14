#include "colors.h"
#include <iostream>

	//Adds a color to the list of colors
	void Color::AddColor(string color)
	{
		Color::colorList.push_back(color);
	}

//This function should determine if a color is unique or not in the list
void Color::UniqueColors(vector<string> uniqueColorList, string evaluatedColor)
{
  uniqueColorList = Color::colorList;
  evaluatedColor = Color::color;

  for(int i = 0; i < uniqueColorList.size(); i++)
  {
      if(uniqueColorList[i] == evaluatedColor)
    {
      //Found Duplicate
			Color::colorList.pop_back();
    }
    else
    {
      //Did Not Find Duplicate
			Color::colorList.push_back(evaluatedColor);
		}
  }
}

//This function should print out each color in the list
void Color::PrintColors(vector<std::string> colorList)
{
	colorList = Color::colorList;
	for(int i = 0; i < colorList.size(); i++)
	{
		std::cout << (colorList[i]) << std::endl;
	}
}
