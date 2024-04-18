#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int val[10], sum_val = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> val[i];
        sum_val += val[i];
    }
    cout << sum_val;
    return 0;
}