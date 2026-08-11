#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer;
    
    for (size_t i = 0; i < dic.size(); i++) {
        answer = 1;

        for (size_t j = 0; j < spell.size(); j++) {
            if (dic[i].find(spell[j]) == string::npos) {
                answer = 2;
                break;
            }
        }

        if (answer == 1) {
            break;
        }
    }

    
    return answer;
}