#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int cnt = 0, m;
        cin >> m;
        while(m != 1)
        {
            if(m % 2 == 0)
            {
                m = m / 2;
                cnt++;
            }
            else
            {
                m = m * 3 + 1;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}