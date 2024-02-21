#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int row = n * 2 - 1;
    for(int i = 0; i < row; i++)
    {
        if(i < n)
        {
            for(int j = 0; j < n - 1 - i; j++)
            {
                cout << " ";
            }
            for(int j = 0; j < i * 2 + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for(int j = 0; j < i - n + 1; j++)
            {
                cout << " ";
            }
            for(int j = 0; j < 2 * (n - 1) + 1 - 2*(i + 1 - n); j++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
    return 0;
}