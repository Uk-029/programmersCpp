#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int maxSides = max(sides[0], sides[1]);
    int minSides = min(sides[0], sides[1]);
    
    
    for(size_t i{}; i < sides[0] + sides[1]; i++)   {
        if(i > maxSides && i < sides[0] + sides[1])    {
            answer++;
        }
        else if(maxSides < minSides + i)    {
            answer++;
        }
    }
    
    return answer;
}