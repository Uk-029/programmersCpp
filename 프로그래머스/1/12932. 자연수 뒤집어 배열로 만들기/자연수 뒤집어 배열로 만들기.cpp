#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    
    reverse(str.begin(), str.end());
    
    for(const char& c: str) {
        answer.emplace_back(c - '0');
    }
    
    return answer;
}