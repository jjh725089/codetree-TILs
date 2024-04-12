#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int sum = 1;
            for(int k = a; k < b + 1; k++)
            {
                sum = sum * k;
            }
        cout << sum << endl;
    }
    return 0;
}