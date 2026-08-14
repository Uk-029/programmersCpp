#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i{}; i < n; )  {
        answer++;
        
        if(answer % 3 == 0 || to_string(answer).find('3') != string::npos)  {
            continue;
        }
        
        i++;
    }
    
    return answer;
}