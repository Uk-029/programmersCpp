#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;    
    int len{1};
    
    for(int n: arr) answer.push_back(n);
    
    while(len < arr.size()) {
        len *= 2;
    }
    
    for(int i{}; i < len - arr.size(); i++) {
        answer.push_back(0);
    }
    
    return answer;
}