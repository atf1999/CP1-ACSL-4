#include <vector>
#include <string>
#include <sstream>
#include <strutil.h>
using namespace std;
int Util::charCount(string val, char needle){
     val += needle;
     int counter;
     for(unsigned i = 0; i < val.length(); ++i ){
        char v = val.at(i);
        if(v == needle){
            ++counter;
        }
     }
     return counter;
}
vector<int> Util::split(string val, char delimiter){
     int i = charCount(val, delimiter);
     val += delimiter + " ";
     vector<int> vect;
     for(int j = 0; j < i; ++j){
        size_t t = val.find(delimiter);
        std::istringstream ss(val.substr(0,t));
        int v;
        ss >> v;
        vect.push_back(v);
        val = val.substr(t+1, val.size());
     }
     return vect;

}
