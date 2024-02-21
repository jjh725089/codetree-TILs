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
        for(int j = 0; j < cnt; j++)
        {
            cout << "* ";
        }
        if(i < temp_cnt - 1)
        {
            cnt--;
        }
        else
        {
            cnt++;
        }
        cout << endl;
    }
    return 0;
}