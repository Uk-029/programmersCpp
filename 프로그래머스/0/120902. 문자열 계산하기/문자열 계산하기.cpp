#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int num = 0;
    char op = '+';
    
    for(const char& c: my_string)   {
        if(isdigit(c))  {
            num = num * 10 + (c - '0');
        }
        else if(c == '+' || c == '-')   {
            answer += (op == '+' ? num : -num);
            num = 0;
            op = c;
        }
    }
    
    return answer += (op == '+' ? num : -num);
}