//���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ������磬���롱They are students.���͡�aeiou����
//��ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��
#if 0
#include<iostream>
#include<string>

int main()
{
	std::string s1, s2, res;
	std::getline(std::cin, s1);
	std::getline(std::cin, s2);
	int hashtable[256] = { 0 };
	for (int i = 0; i < s2.size(); i++)
		hashtable[s2[i]]++;
	for (int i = 0; i < s1.size(); i++)
	{
		if (hashtable[s1[i]] == 0)
			res.push_back(s1[i]);
	}
	std::cout << res << std::endl;
	return 0;
}

#endif