//n个数里出现次数大于等于n/2的数
#if 0
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 0;
	vector<int> vec;
	while (cin >> n)
		vec.push_back(n);
	int count = 1;
	int tmp = vec[0];
	for (int i = 1; i < vec.size(); ++i)
	{
		if (tmp == vec[i])
			count++;
		else
			count--;
		if (count == 0)
		{
			tmp = vec[i];
			count++;
		}
	}
	cout << tmp;
	return 0;
}
#endif

#if 0
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	int count = 0;
	int vec[11] = {0};
	while (cin >> n)
	{
		vec[n] = vec[n] + 1;
		count++;
	}
	for (int i = 0; i < 11; i++)
	{
		if (vec[i] >= count / 2)
		{
			cout << i;
			break;
		}
	}
	return 0;
}
#endif