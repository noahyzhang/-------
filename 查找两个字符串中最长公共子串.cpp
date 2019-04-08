//查找两个字符串a, b中的最长公共子串。若有多个，输出在较短串中最先出现的那个。

#if 0
#include<iostream>
#include<string>
#include<vector>
using namespace std;

string GetMinStr(string& s1, string& s2)
{
	if (s1.size() > s2.size())
		swap(s1, s2);
	int len1 = s1.size();
	int len2 = s2.size();
	vector<vector<int>> dp(len1+1, vector<int>(len2+1, 0));
	string strSum, res;
	int start = 0, max = 0;
	for (int i = 1; i <= len1; ++i)
	{
		for (int j = 1; j <= len2; ++j)
		{
			if (s1[i-1] == s2[j-1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			if (dp[i][j] > max)
			{
				max = dp[i][j];
				start = i - max;
			}
		}
	}
	return s1.substr(start, max);
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	string res = GetMinStr(s1, s2);
	cout << res << endl;
	return 0;
}
#endif