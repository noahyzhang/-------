//Fibonacci��������������ģ�
//F[0] = 0
//F[1] = 1
//for each i �� 2: F[i] = F[i - 1] + F[i - 2]
//��ˣ�Fibonacci���о����磺0, 1, 1, 2, 3, 5, 8, 13, ...����Fibonacci�����е������ǳ�ΪFibonacci����
//����һ��N�����������Ϊһ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX - 1����X + 1��
//���ڸ���һ����N��������Ҫ���ٲ����Ա�ΪFibonacci����

#if 0
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int pre = 0, mid = 1, post;
	long long int n = 0;
	cin >> n;
	long long int Lmin, Rmin;
	while (1)
	{
		post = pre + mid;
		if (post > n && mid <= n)
		{
			Lmin = n - mid;
			Rmin = post - n;
			break;
		}
		pre = mid;
		mid = post;
	}
	cout << min(Lmin, Rmin);
	return 0;
}

#endif