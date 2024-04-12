#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int s, e, sum = 0;
    cin >> s >> e;
    for(int i = s; i < e + 1; i++)
    {
        int cnt = 0;
        for(int j = 1; j < i + 1; j++)
        {
            if (i % j == 0)
            {
                cnt++;
                //cout << cnt << endl;
            }
        }
        if (cnt == 4)
        {
            sum ++;
        }
    }
    cout << sum << endl;
    return 0;
}