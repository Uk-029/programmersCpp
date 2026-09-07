#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int cnt = 0;
    
    while(cnt < n)    {
        if(cnt % 2 == 0)  {
            answer += "수";
            cnt++;
        }
        else if(cnt % 2 != 0) {
            answer += "박";
            cnt++;
        }
    }
    
    return answer;
}