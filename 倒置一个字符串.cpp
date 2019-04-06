//将一句话的单词进行倒置，标点不倒置。比如 I like beijing.经过函数后变为：beijing.like I
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