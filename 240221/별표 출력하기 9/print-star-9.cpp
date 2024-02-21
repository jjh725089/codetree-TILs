#include <iostream>
using namespace std;
int main() {
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++) // 줄 출력
    {
        for(int j = 0; j < cnt - i - 1; j++) //공백출력
        {
            cout << "  ";
        }
        for(int j = 0; j < i * 2 + 1; j++) // * 출력
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}