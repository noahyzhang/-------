//����һ���ַ���str������ַ���str�е�����������ִ�
#if 0
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, res, cur;
	cin >> s1;
	for (int i = 0; i <= s1.size(); ++i)  //��������� <= Ŀ����Ϊ��������ִ��������
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