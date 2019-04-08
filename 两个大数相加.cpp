//请设计一个算法完成两个超长正整数的加法。

#if 0
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string AddStr(string& s1, string& s2)
{
	int len1 = s1.size() - 1;
	int len2 = s2.size() - 1;
	int carry = 0;
	string res;
	while (len1 >= 0 || len2 >= 0)
	{
		if (len1 >= 0)
			carry += s1[len1]-'0';
		if (len2 >= 0)
			carry += s2[len2]-'0';

		res.push_back(carry % 10 + '0');
		carry /= 10;

		len1--;
		len2--;
	}
	if (carry == 1)
		res.push_back('1');
	reverse(res.begin(), res.end());
	return res;
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << AddStr(s1, s2) << endl;
	return 0;
}
#endif