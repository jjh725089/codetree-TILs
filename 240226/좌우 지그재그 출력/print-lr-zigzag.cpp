#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt;
    cin >> n;
    cnt = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i % 2 == 0)
            {
                cout << cnt << " ";
                cnt++;
            }
            else
            {
                cout << cnt + n - j * 2 - 1<< " ";
                cnt++;
            }
        }
        cout << endl;
    }
    return 0;
}