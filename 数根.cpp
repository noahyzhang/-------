
//��������ͨ����һ�����ĸ���λ�ϵ����ּ������õ�������õ�������һλ������ô���������������
//����������λ�����߰�������λ�����֣���ô�ٰ���Щ���ּ���������˽�����ȥ��ֱ���õ���һλ��Ϊֹ��
//���磬����24 ��˵����2 ��4 ��ӵõ�6������6 ��һλ�������6 ��24 ��������
//�ٱ���39����3 ��9 �������õ�12������12 ����һλ������˻��ð�1 ��2 �����������õ�3������һ��һλ�������3 ��39 ��������
//���ڸ���һ�����������������������

#if 0
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int count = 0;
		while (num)
		{
			count += num % 10;
			num /= 10;
			if (count >= 10)
			{
				num = count;
				count = 0;
			}
		}
		cout << count << endl;
	}
	return 0;
}

#endif

#if 0
#include <iostream>
#include <string>
int numRoot(int num) {
	int nroot = 0;
	while (num > 0) {
		nroot += num % 10;/*ÿ��ֻ��ȡ��λ����*/
		num /= 10;
	}
	while (nroot > 9) {
		nroot = numRoot(nroot);
	}
	return nroot;
}
int main()
{
	std::string origin;
	while (std::cin >> origin)
	{
		int sum = 0;
		for (int i = 0; i < origin.length(); i++) 
		{
			sum += origin[i] - '0';
		}
		std::cout << numRoot(sum) << std::endl;
	}
	return 0;
}
#endif