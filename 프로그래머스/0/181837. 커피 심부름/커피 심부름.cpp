#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int sum = 0;
    
    for(const string& str: order)   {
        if(str.find("americano") != string::npos || str == "anything")    {
            sum += 4500;
        }
        else    {
            sum += 5000;
        }
    }
    return sum;
}