#include <string>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(int i{}; i < myString.size(); i++)
        if(myString.find(pat, i) != string::npos) {
            answer++;
            i = myString.find(pat, i);
        }
    
    return answer;
}