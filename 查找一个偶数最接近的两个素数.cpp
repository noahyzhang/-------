//任意一个偶数（大于2）都可以由2个素数组成，组成偶数的2个素数有很多种情况，
//本题目要求输出组成指定偶数的两个素数差值最小的素数对

#if 0
#include<iostream>
#include<algorithm>

bool Isprimy(int num)
{
	for (int i = 2; i <= sqrt(num); ++i)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n = 0;
	std::cin >> n;
	int half = n / 2;
	for (int i = half; i > 0; --i)
	{
		if (Isprimy(i) && Isprimy(n - i))
		{
			std::cout << i << std::endl << (n - i) << std::endl;
			break;
		}
	}
	return 0;
}
#endif