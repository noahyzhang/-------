//��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ����
//
//�����е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ���������
//
//���磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬����5������ӣ�1 + 2 + 4 + 7 + 14 = 28��
//
//��������count(int n), ���ڼ���n����(��n)��ȫ���ĸ��������㷶Χ, 0 < n <= 500000
//
//	����n������ȫ���ĸ����� �쳣������� - 1

#if 0
#include<iostream>
#include<algorithm>
using namespace std;

int count(int n)
{
	int res = 0;
	for (int i = 2; i <= n; ++i)
	{
		int m = 0;
		int sq = sqrt(i);
		for (int j = 2; j <= sq; ++j)
		{
			if (i % j == 0)
			{
				if (i / j == j)
					m += j;
				else
					m += j + (i/j);
			}
		}
		if (m + 1 == i)
			res++;
	}
	return res;
}

int main()
{
	int n = 0;
	cin >> n;
	cout << count(n) << endl;
	return 0;
}
#endif