//A = “aba”，B = “b”。这里有4种把B插入A的办法：
//* 在A的第一个字母之前: "baba" 不是回文
//* 在第一个字母‘a’之后 : "abba" 是回文
//* 在字母‘b’之后 : "abba" 是回文
//* 在第二个字母'a'之后 "abab" 不是回文
//所以满足条件的答案为2

#if 0
#include<iostream>
#include<string>
using namespace std;

bool IsCircleText(string s)
{
	size_t begin = 0;
	size_t end = s.size() - 1;
	while (begin < end)
	{
		if (s[begin] != s[end])
			return false;
		begin++;
		end--;
	}
	return true;
}

int main()
{
	string s1, s2, tmp;
	getline(cin, s1);
	getline(cin, s2);
	int count = 0;
	for (int i = 0; i <= s1.size(); ++i)
	{
		tmp = s1;
		tmp.insert(i, s2);
		if (IsCircleText(tmp))
			count++;
		tmp.clear();
	}
	cout << count;
	return 0;
}
#endif