//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.�����������Ϊ��beijing.like I
#if 0
#include<iostream>
#include<string>

int main()
{
	std::string s1, s2;
	std::cin >> s2;
	while (std::cin >> s1)
		s2 = s1 + ' ' + s2;
	std::cout << s2 << std::endl;
	return 0;
}
#endif