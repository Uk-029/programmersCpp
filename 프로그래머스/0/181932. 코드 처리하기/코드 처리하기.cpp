#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    
    string ret;
    int mode{};
    
    for(size_t idx{}; idx < code.length(); idx++)   {
        if(mode == 0)   {
            if(code[idx] != '1' && idx % 2 == 0)    ret += code[idx];
            else if(code[idx] == '1')   mode = 1;
        }
        else if(mode == 1)   {
            if(code[idx] != '1' && idx % 2 != 0)    ret += code[idx];
            else if(code[idx] == '1')   mode = 0;
        }
    }
    
    if(ret == "")   ret = "EMPTY";
    
    return ret;
}