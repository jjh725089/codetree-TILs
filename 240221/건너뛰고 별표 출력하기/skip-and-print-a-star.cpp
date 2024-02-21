#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt;
    cin >> cnt;
    int temp_cnt = cnt;
    int row = cnt * 2 - 1;
    for(int i = 0; i < row; i++)
    {
        if(i == 0)
        {
            temp_cnt = 1;
        }
        for(int j = 0; j < temp_cnt; j++)
        {
            cout << "*";
        }
        cout << endl;
        if(i < cnt -1)
        {
            temp_cnt++;
        }
        else
        {
            temp_cnt--;
        }
        if(i == row - 1)
        {
            break;
        }
        cout << endl;
    }
    return 0;
}