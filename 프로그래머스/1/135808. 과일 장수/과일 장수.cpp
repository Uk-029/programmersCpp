#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int money = 0;
    sort(score.begin(), score.end(), greater<int>());
    
    vector<int> box;
    for(const int& apple: score)    {
        box.emplace_back(apple);
        
        if(box.size() == m) {
            money += *min_element(box.begin(), box.end()) * m;
            box.clear();
        }
    }
    
    return money;
}