#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int sum{}, multi{1};
    for(size_t i{}; i < num_list.size(); i++)   {
        multi *= num_list[i];
        sum += num_list[i];
    }
    
    return multi < sum*sum ? 1 : 0;
}