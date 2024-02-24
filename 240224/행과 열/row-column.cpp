#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int row, col;
    cin >> row >> col;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << (i + 1) * (j + 1) << " ";
        }
        cout << endl;
    }
    return 0;
}