#include "colors.h"
#include <string>
#include <string>


using std::string;
using std::vector;

bool Color::UniqueColors(vector<string> uniqueColorList, string evaluatedColor)
{
  uniqueColorList = Color::colorList;
  evaluatedColor = Color::color;

  //Used to determine if a color is Unique or Not
  int evaluation;

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
  if (evaluation == 1)
    return true; 
  else
    return false;
  }
  
void Color::ChooseColors(vector<std::string> colorList, string color)
{
  colorList = Color::colorList;
  color = Color::color;
   cin >> color;
  colorList.push_back(color);
}