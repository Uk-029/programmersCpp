#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int oddSum{}, evenSum{};
    for(int i{}; i < num_list.size(); i++)  {
        if(i % 2 == 0) evenSum += num_list[i];
        else if(i % 2 != 0) oddSum += num_list[i];
    }
    
    return evenSum >= oddSum ? evenSum : oddSum;
}