#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string res{};
    for(int i{}; i < numLog.size() - 1; i++)  {
        if(numLog[i + 1] - numLog[i] == 1)  res += 'w';
        else if(numLog[i + 1] - numLog[i] == -1) res += 's';
        else if(numLog[i + 1] - numLog[i] == 10) res += 'd';
        else if(numLog[i + 1] - numLog[i] == -10) res += 'a';
    }
    return res;
}