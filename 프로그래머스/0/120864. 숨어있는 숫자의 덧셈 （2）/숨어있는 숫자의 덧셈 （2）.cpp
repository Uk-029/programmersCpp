#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(size_t i{}; i < my_string.size(); i++)  {
        if(isdigit(my_string[i]))   {
            string num;
            
            while(i < my_string.size() && isdigit(my_string[i]))    {
                num += my_string[i];
                i++;
            }
            answer += stoi(num);
        }
    }
    
    return answer;
}