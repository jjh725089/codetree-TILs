#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, arr[100][100], total = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n - 1; j++)
        {
            if(arr[i][j] == arr[i][j+1])
            {
                cnt++;
            }
            if (cnt == m - 1) // m - 1 인이유 연속일경우 2개부터 
            total++;
        }
    }
    //cout << total<< "r" << endl;
    for(int j = 0; j < n; j++)
    {
        int cnt = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(arr[i][j] == arr[i+1][j])
            cnt++;
            if (cnt == m - 1)
            total++;
        }
    }
    //cout << total << "c" << endl;
    cout << total << endl;
    return 0;
}