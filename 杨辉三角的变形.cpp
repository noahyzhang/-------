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
//���������ε����󣬵�һ��ֻ��һ����1������ÿ�е�ÿ��������ǡ������������������Ͻ��������Ͻǵ�����3����֮�ͣ����������ĳ��������Ϊ��������0����
//
//���n�е�һ��ż�����ֵ�λ�á����û��ż��������� - 1����������3, �����2������4�����3��

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