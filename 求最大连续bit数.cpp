//
//����: ��һ��byte���ֶ�Ӧ�Ķ�����������1�����������������3�Ķ�����Ϊ00000011���������2��1
//
//	���� : һ��byte�͵�����
//
//	��� : ��
//
//	���� : ��Ӧ�Ķ�����������1�����������

#if 0
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int maxCount = 0, count = 0;
	while (n)
	{
		if (n & 1)
		{
			count++;
			maxCount = max(maxCount, count);
		}
		else
			count = 0;
		n = n >> 1;
	}
	cout << maxCount;
	return 0;
}

#endif