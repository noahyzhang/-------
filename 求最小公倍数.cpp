//����������С������
//��С��������������֮���������Լ��

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