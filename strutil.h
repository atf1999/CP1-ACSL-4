#ifndef STRUTIL_H_INCLUDED
#define STRUTIL_H_INCLUDED
#include <vector>
#include <string>
using namespace std;
class Util{
          //Method that seperates a string value into a vector
  public: vector<int>split(string val, char delimiter);
          //Counts the number of times a char appears in a string
          int charCount(string val, char needle);
};


#endif // STRUTIL_H_INCLUDED
