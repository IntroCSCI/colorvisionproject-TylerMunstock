#ifndef COLORS_H
#define COLORS_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class Color
{
  private: // Only can be used directly INSIDE this class
    vector<string> colorList;
    int numberOfColors;
    string color;
  
  public: // Can be used directly INSIDE and OUTSIDE this class
    void UniqueColors(vector<string> uniqueColorList, string evaluatedColor);
		void PrintColors(vector<string> colorList);
		void AddColor(string color);
};

#endif