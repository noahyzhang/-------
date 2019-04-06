//输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。例如，输入”They are students.”和”aeiou”，
//则删除之后的第一个字符串变成”Thy r stdnts.”
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