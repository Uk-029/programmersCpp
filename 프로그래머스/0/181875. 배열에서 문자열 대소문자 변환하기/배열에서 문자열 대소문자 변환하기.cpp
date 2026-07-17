#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    for(int i{}; i < strArr.size(); i++)    {
        if(i % 2 != 0)
            transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::toupper);
        else if(i % 2 == 0)
            transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::tolower);
    }
    
    return strArr;
}