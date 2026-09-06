#include <string>
#include <iostream>
using namespace std;

bool solution(string s) {
    int cntP = 0, cntY = 0;
    
    for(const char& c: s)   {
        if(c == 'p' || c == 'P')    {
            cntP++;
        }
        else if(c == 'y' || c == 'Y')   {
            cntY++;
        }
    }

    return cntP == cntY ? true : false;
}