#include <iostream>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt, tmp_cnt;
    cin >> cnt;
    int row = cnt * 2 - 1;
    for(int i = 0; i < row; i++)
    {
        if(i == 0)
        {
            tmp_cnt = 1;
        }
        for(int j = 0; j < tmp_cnt; j++)
        {
            cout << "*" << " ";
        }
        if(i < cnt - 1)
        {
            tmp_cnt++;
        }
        else
        {
            tmp_cnt--;
        }
        cout << endl;
    }
    return 0;
}