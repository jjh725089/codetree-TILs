#include <iostream>
using namespace std;
int main() {
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for(int j = 0; j < 2 * cnt - 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}