#include <string>
#include <algorithm>

using namespace std;

string solution(string my_string, string alp) {
    
    transform(my_string.begin(), my_string.end(), my_string.begin(),
              [alp](char& c) {
                  return c == alp[0] ? toupper(c) : c;
              });
    return my_string;
}