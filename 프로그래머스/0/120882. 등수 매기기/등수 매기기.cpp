#include <string>
#include <vector>       //<utility>가 포함됨
#include <algorithm>    //<utility>가 포함됨

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
    vector<pair<int, int>> averageScore;
    
    for(size_t i{}; i < score.size(); i++)  {
        averageScore.emplace_back(score[i][0] + score[i][1], i);
    }
    
    sort(averageScore.begin(), averageScore.end(),
        [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        }
    );
    
    for (size_t i{}; i < averageScore.size(); i++) {
        if (i > 0 && averageScore[i].first == averageScore[i - 1].first) {
            answer[averageScore[i].second] = answer[averageScore[i - 1].second];
        }
        else {
            answer[averageScore[i].second] = i + 1;
        }
    }
    
    return answer;
}