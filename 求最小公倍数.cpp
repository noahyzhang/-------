//求两数的最小公倍数
//最小公倍数就是两数之积除以最大公约数

#if 0

#include<iostream>
using namespace std;

int gcb(int a, int b)
{
	int c;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a * b / gcb(a, b) << endl;
	return 0;
}

#endif // 0