#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int val[10], val_sum = 0, j = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> val[i];
    }
    for(int i = 0; i < 10; i++)
    {
        if(val[i] < 250)
        {
            val_sum += val[i];
        }
        else
        {
            j = 1;
            cout << val_sum << " ";
            cout << fixed;
            cout.precision(1);
            cout << double(val_sum) / i;
            break;
        }
    }
    if(j == 0)
    {
        cout << val_sum << " ";
        cout << fixed;
        cout.precision(1);
        cout << double(val_sum) / 10;
    }
    return 0;
}