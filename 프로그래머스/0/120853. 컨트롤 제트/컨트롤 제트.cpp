#include <sstream>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    vector<int> temp;
    string token;
        
    while (ss >> token) {
        if (token == "Z") {
            answer -= temp.back();
            temp.pop_back();
        }
        else {
            int num = stoi(token);
            temp.push_back(num);
            answer += num;
        }
    }
    
    return answer;
}