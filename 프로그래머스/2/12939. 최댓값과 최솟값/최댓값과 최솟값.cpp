#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    stringstream ss(s);
    
    int n;
    ss >> n;
    
    int minNum = n;
    int maxNum = n;

    while (ss >> n) {
        minNum = min(minNum, n);
        maxNum = max(maxNum, n);
    }

    return to_string(minNum) + " " + to_string(maxNum);
}