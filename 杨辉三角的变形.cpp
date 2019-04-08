//1
//
//1  1  1
//
//1  2  3  2  1
//
//1  3  6  7  6  3  1
//
//1  4  10 16 19  16 10  4  1
//
//以上三角形的数阵，第一行只有一个数1，以下每行的每个数，是恰好是它上面的数，左上角数到右上角的数，3个数之和（如果不存在某个数，认为该数就是0）。
//
//求第n行第一个偶数出现的位置。如果没有偶数，则输出 - 1。例如输入3, 则输出2，输入4则输出3。

#if 0
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<vector<int>> dp(n + 1,vector<int>(2 * n,0));
	dp[1][n] = 1;
	for (int i = 2; i <= n; ++i)
	{
		for (int j = n - i + 1; j < 2 * n; ++j)
		{
			if (j - 1 != 0 && j + 1 != 2 * n)
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1];
			else if (j - 1 == 0)
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1];
			else if (j + 1 == 2 * n)
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}
	for (int i = 1; i < 2 * n; ++i)
	{
		if (dp[n][i] % 2 == 0)
		{
			cout << i;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}
#endif