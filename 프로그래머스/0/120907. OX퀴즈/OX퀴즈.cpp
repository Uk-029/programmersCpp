#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int a, b, c;
    char op, equal;
    string ans;
    
    for(size_t i{}; i < quiz.size(); i++) {
        stringstream ss(quiz[i]);
        ss >> a >> op >> b >> equal >> c;
        
        switch(op)  {
            case '+':
                ans = a + b == c ? "O" : "X";
                break;
            case '-':
                ans = a - b == c ? "O" : "X";
                break;
        }
        answer.emplace_back(ans);
    }
        
    return answer;
}