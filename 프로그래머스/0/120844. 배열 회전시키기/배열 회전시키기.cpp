#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    
    if(direction == "right")    {
        answer.emplace_back(numbers.back());
        for(size_t i{}; i < numbers.size() - 1; i++)    {
            answer.emplace_back(numbers[i]);
        }
    }
    
    else if(direction == "left")    {
        for(size_t i{1}; i < numbers.size(); i++)    {
            answer.emplace_back(numbers[i]);
        }
        answer.emplace_back(numbers.front());
    }
    
    return answer;
}