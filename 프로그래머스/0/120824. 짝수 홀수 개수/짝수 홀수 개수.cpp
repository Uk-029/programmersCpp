#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int odd = 0;
    int even = 0;
    
    for(const auto& num: num_list)  {
        num % 2 != 0 ? odd++ : even++;
    }
    
    return vector<int> {even, odd};
}