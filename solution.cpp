#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // to run this program in WINDOWS operating system
    // download this file into your local PC
    // Open command line and dive to that folder
    // run the below command
    // "g++ -o sol solution.cpp"
    // then run this command
    // "sol.exe"
    // first enter the lines number
    // then enter numbers it self (you can copy and paste)
    int n, val;
    cin >> n;

    vector<vector<int>> dp(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> val;
            dp[i].push_back(val);
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    cout << dp[0][0] << endl;
    return 0;
}