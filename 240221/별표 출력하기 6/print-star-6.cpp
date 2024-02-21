#include <iostream>
using namespace std;
int main() {
    int cnt;
    cin >> cnt;
    int temp_cnt = cnt;
    int row = cnt * 2 - 1;
    for(int i = 0; i < row; i++)
    {
        if(i < cnt)
        {
            for(int j = 0; j < i; j++)
            {
                cout << "  ";
            }
            for(int j = 0; j < (cnt - i) * 2 - 1; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for(int j = 0; j < row - i - 1; j++)
            {
                cout << "  ";
            }
            for(int j = 0; j < 2 * (i - (cnt -1)) + 1; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}