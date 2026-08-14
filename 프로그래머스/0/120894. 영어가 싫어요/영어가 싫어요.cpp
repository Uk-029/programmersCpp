#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string temp = "";
    string num[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i{}; i < numbers.size(); i++)   {
        temp += numbers[i];
        
        for(int j{}; j < 10; j++)   {
            if(temp == num[j])  {
                answer = answer * 10 + j;
                temp = "";
                break;
            }
        }
    }
    
    return answer;
}