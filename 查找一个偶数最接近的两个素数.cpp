//����һ��ż��������2����������2��������ɣ����ż����2�������кܶ��������
//����ĿҪ��������ָ��ż��������������ֵ��С��������

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