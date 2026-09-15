#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string answer = "";

    vector<string> numbers = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    for (size_t i = 0; i < s.size();) {
        if (isdigit(s[i])) {
            answer += s[i];
            i++;
        }
        else {
            for (int j = 0; j < 10; j++) {
                if (s.substr(i, numbers[j].size()) == numbers[j]) {
                    answer += char('0' + j);
                    i += numbers[j].size();
                    break;
                }
            }
        }
    }

    return stoi(answer);
}