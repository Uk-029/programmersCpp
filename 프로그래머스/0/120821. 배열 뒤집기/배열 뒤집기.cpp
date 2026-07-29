#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    for(const int& n: num_list) {
        answer.insert(answer.begin(), n);
    }
    
    return answer;
}