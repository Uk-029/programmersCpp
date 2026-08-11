#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(char& c: my_string) {
        if('a' <= c && c <= 'z')    {
            c -= 32;
        }
        else if('A' <= c && c <= 'Z')   {
            c += 32;
        }
    }
    return my_string;
}