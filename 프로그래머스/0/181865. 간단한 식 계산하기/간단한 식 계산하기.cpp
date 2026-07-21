#include <string>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    int a, b;
    char op;
    
    stringstream ss(binomial);
    ss >> a >> op >> b;
    
    switch(op)    {
            case '+':
                answer = a + b;
                break;
            case '-':
                answer = a - b;
                break;
            case '*':
                answer = a * b;
                break;
    }
    return answer;
}