//读入一个字符串str，输出字符串str中的连续最长的数字串
#if 0
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, res, cur;
	cin >> s1;
	for (int i = 0; i <= s1.size(); ++i)  //这块必须给成 <= 目的是为了最长的数字串在最后面
	{
		if (s1[i] >= '0' && s1[i] <= '9')
			cur.push_back(s1[i]);
		else
		{
			if (cur.size() > res.size())
				res = cur;
			else
				cur.clear();
		}
	}
	cout << res;
	return 0;
}

#endif