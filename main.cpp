#include <iostream>
#include <string>
#include <vector>
#include <strutil.h>
using namespace std;
//Array that holds reference values and bools
int vals[] = {8,4,2,1};
bool bools[4];
//Recursivity without welcome screen
void start();
//Final binary
void binary();
//letters
void letters();
//input of the user
string input;
//Util class for string
Util util;
//Vector for start
vector<int> vect;
//vector for scope jumping
vector<string> vBin;
//final binary literal and letter literal
string bFinal, bLett;
//array of letters
string lower[] = {"a", "b", "c", "d"},
     upper[] = {"A", "B", "C", "D"};
int main()
{
    for(int z = 0; z < 8; ++z){bools[z] = true;}
    cout << "Welcome to ASCL 4 of CP1.  Lets begin." <<"\n\n";
    start();
    return 0;

}
void start(){
   input = "";
   cout<<"Input values seperated by commas: ";
   cin>>input;

   //begins the verification process
   //First we get binary

   //Obtains inputs in form of vectors
   vect = util.split(input, ',');
   //stores binary
   string bin[util.charCount(input, ',')];
   //Iterates through vector
   for(int i = 0; i < vect.size(); ++i){
   //Iterates through values
     for(int k = 0; k < 4; ++k){
         //if current input - current ref val, add 1
         if((vect[i] - vals[k]) >= 0){
            vect[i] -= vals[k];
            bin[i] +="1";

         }
         else{
            //Else, add 0
            bin[i] += "0";

         }

    }
     vBin.push_back(bin[i]);
     cout<<"Binary "<<i+1<<": "<<bin[i]<<"\n";
   }
   binary();
}
//Second, we determine the final binary
void binary(){
    if(vBin.size() > 1){
    int iterate = vBin.size() + 1;
    for(int x = 0; x < vBin.size(); ++x){
        iterate -= 1;
        for(int y = 1; y < iterate; ++y){
           for(int z = 0; z < 4; ++z){
              if(vBin[x].substr(z, 1) == vBin[x+y].substr(z,1)){
                  if(!bools[z]){
                    break;
                  }
                  else{
                  bools[z] = true;
                  }
              }
              else{
                cout<<"false="<<z<<"\n";
                bools[z] = false;
              }

           }

           }

        }
    for(int d = 0; d < 5; ++d){
        if(bools[d]){
            bFinal += vBin[0].substr(d,1);
        }
        else{
            bFinal += "x";
        }
    }
    }
    else{
        bFinal = vBin[0];
    }
    cout<<"Final binary: "<<bFinal<<"\n";
    letters();
  }
  void letters(){
     for(int q = 0; q < 4; ++q){
        if(bFinal.substr(q, 1) != "x"){
            if(bFinal.substr(q, 1) == "0"){bLett += lower[q];}
            else if(bFinal.substr(q,1) == "1"){bLett += upper[q];}
        }
        else{
            bLett += "";
        }
     }
     cout<<"Final Letter: "<<bLett;
  }


