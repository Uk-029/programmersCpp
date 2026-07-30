#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    for(int i{}; i < n; i++)    {
        for(int j{}; j <= i; j++)    {
            cout << '*';   
        }
        cout << endl;
    }
    
    return 0;
}