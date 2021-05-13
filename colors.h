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
    bool UniqueColors(vector<string> uniqueColorList, string evaluatedColor);
    void ChooseColors(vector<string> colorList, string color);
};

#endif