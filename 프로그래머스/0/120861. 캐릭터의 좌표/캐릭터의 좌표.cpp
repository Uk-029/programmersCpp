#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    int x = 0, y = 0;
    int sizeX = board.front() / 2;
    int sizeY = board.back() / 2;
    
    for(size_t i{} ; i < keyinput.size(); i++)   {
        if(keyinput[i] == "right" && x < sizeX) {
            x++;
        }
        else if(keyinput[i] == "left" && x > -sizeX) {
            x--;
        }
        else if(keyinput[i] == "up" && y < sizeY) {
            y++;
        }
        else if(keyinput[i] == "down" && y > -sizeY) {
            y--;
        }
    }
    
    return vector <int> {x, y};
}