#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, arr[200][200], max = 0, sum = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    //3칸 한줄짜리
    //col
    for(int i = 0; i < n - 2; i++)
    {
        for(int j = 0; j < m; j++)
        {
            sum = arr[i][j] + arr[i + 1][j] + arr[i + 2][j];
            if(sum > max)
            max = sum;
            sum = 0;
        }
    }
    for(int j = 0; j < m - 2; j++)
    {
        for(int i = 0; i < n; i++)
        {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
            if(sum > max)
            max = sum;
            sum = 0;
        }
    }
    //한 칸을 기준으로 상(좌,우) 하(좌,우) 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            //if(i - 1 < 0 || i + 1 == n || j - 1 < 0 || j + 1 == m)
            //break;
            if(j + 1 == m || i + 1 == n)
            sum = 0;
            else
            {
                sum = arr[i][j] + arr[i][j+1] + arr[i+1][j];
                if(sum > max)
                max = sum;
            }
            if(j + 1 == m || i - 1 < 0)
            sum = 0;
            else
            {
                sum = arr[i][j] + arr[i][j+1] + arr[i-1][j];
                if(sum > max)
                max = sum;
            }
            if(j - 1 < 0 || i + 1 == n)
            sum = 0;
            else
            {
                sum = arr[i][j] + arr[i][j-1] + arr[i+1][j];
                if(sum > max)
                max = sum;
            }
            if(j - 1 < 0 || i - 1 < 0)
            sum = 0;
            else
            {
                sum = arr[i][j] + arr[i][j-1] + arr[i-1][j];
                if(sum > max)
                max = sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}