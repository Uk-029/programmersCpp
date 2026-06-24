#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string even{}, odd{};
    for(size_t i{}; i < num_list.size(); i++)   {
        if(num_list[i] % 2 != 0) odd.append(to_string(num_list[i]));
        else if(num_list[i] % 2 == 0) even.append(to_string(num_list[i]));
    }
    return stoi(even) + stoi(odd);
}