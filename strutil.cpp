#include <vector>
#include <strutil.h>
using namespace std;
int Util::charCount(string val, char needle){
     int counter;
     for(unsigned i = 0; i < val.length(); ++i ){
        char v = val.at(i);
        if(v == needle){
            ++counter;
        }
     }
     return counter;
}
vector<string> Util::split(string val, char delimiter){
     val += delimiter + " ";
     vector<string> vect;
     for(int j = 0; j < charCount(val, delimiter); ++j){
        size_t t = val.find(delimiter);
        vect.push_back(val.substr(0, t));
        val = val.substr(t+1);
     }
     return vect;

}
