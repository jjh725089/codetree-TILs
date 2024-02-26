#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt = 0, n, tmp_n;
    cin >> a >> b;
    if (b % 2 == 1)
    n = b - 1;
    else
    n = b;
    tmp_n = n;
    for(int i = a; i < b + 1; i++)
    {
        if(i % 2 == 0)
        cnt++;
    }
    for(int i = 1; i < 10; i++)
    {
        n = tmp_n;
        for(int j = 0; j < cnt; j++)
        {
            cout << n << " * " << i << " = " << i * n;
            if(j < cnt - 1)
            cout << " / ";
            n -= 2;
        }
        cout << endl;
    }
    return 0;
}