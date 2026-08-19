#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(size_t i{}; i < array.size(); i++)  {
        string str = to_string(array[i]);
        
        for(const char& c: str) {
            if(c == '7')    {
                answer++;
            }
        }
    }
    
    return answer;
}