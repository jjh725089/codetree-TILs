#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt;
    cin >> n;
    cnt = 1;
    for(int i = 0; i < n; i++)
    {
        if(cnt == 10)
        cnt = 1;
        for(int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for(int j = 0; j < n - i; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}