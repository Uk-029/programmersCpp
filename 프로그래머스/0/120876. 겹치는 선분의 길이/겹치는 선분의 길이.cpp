#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int numLine[201] = {0};
    
    for(const auto& line: lines)    {
        int start = line[0] + 100;
        int end = line[1] + 100;
        
        for(size_t i = start; i < end; i++) {
            numLine[i]++;
        }
    }
    
    for(size_t i{}; i < 201; i++)    {
        if(numLine[i] >= 2)    {
            answer++;
        }
    }
    
    return answer;
}