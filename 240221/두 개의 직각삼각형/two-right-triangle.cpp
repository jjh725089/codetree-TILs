#include <iostream>
using namespace std;
int main() {
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++)
    {
        for(int j = 0; j < cnt - i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        //두번째 삼각형
        for(int j = 0; j < cnt - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}