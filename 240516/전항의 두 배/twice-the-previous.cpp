#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, temp;
    cin >> a >> b;
    cout << a << " " << b << " ";
    for(int i = 2; i < 10; i++)
    {
        cout << 2 * a + b << " ";
        temp = a;
        a = b;
        b = 2 * temp + a;
    }
    return 0;
}