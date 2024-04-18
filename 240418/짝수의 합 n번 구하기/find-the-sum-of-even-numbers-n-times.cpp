#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        for(int j = a; a <= b; a++)
        {
            if(a % 2 == 0)
            {
                sum += a;
            }
        }
        cout << sum << endl;
    }
    return 0;
}