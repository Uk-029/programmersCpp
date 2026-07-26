#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string temp;
    
    for(size_t i{}; i < picture.size(); i++)   {
        for(size_t j{}; j < picture[i].size(); j++)    {
            for(int l{}; l < k; l++)    {
                temp += picture[i][j];
            }
        }
        for(int n{}; n < k; n++)    {
            answer.emplace_back(temp);
        }
        temp.clear();
    }
    
    return answer;
}