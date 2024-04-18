#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    double arr[5], sum = 0, avg;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    if (avg >= 4.0)
    cout << "Perfect";
    else if (avg >= 3.0)
    cout << "Good";
    else
    cout << "poor";
    return 0;
}