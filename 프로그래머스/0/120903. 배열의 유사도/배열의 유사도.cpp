#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for(size_t i{}; i < s1.size(); i++) {
        for(size_t j{}; j < s2.size(); j++) {
            if(s1[i] == s2[j])  {
                answer++;
            }
        }
    }
    
    return answer;
}