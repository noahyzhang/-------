//A = ��aba����B = ��b����������4�ְ�B����A�İ취��
//* ��A�ĵ�һ����ĸ֮ǰ: "baba" ���ǻ���
//* �ڵ�һ����ĸ��a��֮�� : "abba" �ǻ���
//* ����ĸ��b��֮�� : "abba" �ǻ���
//* �ڵڶ�����ĸ'a'֮�� "abab" ���ǻ���
//�������������Ĵ�Ϊ2

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