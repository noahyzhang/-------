//题目标题：
//
//计算两个字符串的最大公共字串的长度，字符不区分大小写

#if 0
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int len1 = s1.size(), len2 = s2.size();
	int max = 0;
	vector<vector<int>> dp(len1, vector<int>(len2,0));
	for (int i = 0; i < len1; ++i)
	{
		for (int j = 0; j < len2; ++j)
		{
			if (s1[i] == s2[j])
			{
				if (i >= 1 && j >= 1)
					dp[i][j] = dp[i-1][j-1] + 1;
				else
					dp[i][j] = 1;
			}
			if (dp[i][j] > max)
				max = dp[i][j];
		}
	}
	cout << max << endl;
	return 0;
}
#endif