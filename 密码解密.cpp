
#if 0
#include<string>
#include<iostream>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == ' ')
				continue;
			if ((int)s[i] - 5 < 65)
			{
				s[i] = 90 - (65 - ((int)s[i] - 5)) + 1;
			}
			else
				s[i] -= 5;
		}
		cout << s << endl;
	}
	return 0;
}
#endif