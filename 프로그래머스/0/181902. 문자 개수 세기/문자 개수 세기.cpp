#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);

    for (char c : my_string) {
        if ('A' <= c && c <= 'Z')
            answer[c - 'A']++;
        else
            answer[c - 'a' + 26]++;
    }

    return answer;
}