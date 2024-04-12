#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int s, e, cnt = 0;
    cin >> s >> e;
    for(int i = s; i < e + 1; i++)
    {
        int sum = 0;
        for(int j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}