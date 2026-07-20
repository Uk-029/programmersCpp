#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(auto& s: myString)  {
        if(s == 'A') s = 'B';
        else if(s == 'B') s = 'A';
    }
    if(myString.find(pat) != string::npos) answer = 1;
    return answer;
}