
#if 0
#include<iostream>
using namespace std;

int main()
{
	int mouth;
	while (cin >> mouth)
	{
		int first = 1, second = 1;
		int result = 1;
		for (int i = 3; i <= mouth; ++i)
		{
			result = first + second;
			second = first;
			first = result;
		}
		cout << result << endl;
	}
	return 0;
}
#endif