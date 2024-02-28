#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 19;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << i << " * " << j << " = " << i * j;
            if(j == 19)
            cout << endl;
            else if(j % 2 != 0)
            cout << " / ";
            else if(j % 2 == 0)
            cout << endl;
        }
    }
    return 0;
}