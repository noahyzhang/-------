

//������һ�������⣺��ĳ�̵�涨����������ˮƿ���Ի�һƿ��ˮ��С��������ʮ������ˮƿ���������Ի�����ƿ��ˮ�ȣ�������5ƿ��
//�������£�����9����ƿ�ӻ�3ƿ��ˮ���ȵ�3ƿ���ģ������Ժ�4����ƿ�ӣ���3���ٻ�һƿ���ȵ���ƿ���ģ���ʱ��ʣ2����ƿ�ӡ�
//Ȼ�������ϰ��Ƚ����һƿ��ˮ���ȵ���ƿ���ģ������Ժ���3����ƿ�ӻ�һƿ���Ļ����ϰ塣���С��������n������ˮƿ�������Ի�����ƿ��ˮ�ȣ�

#if 0
#include<iostream>p9
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int sum = 0;
		while (num > 1)
		{
			int result = num / 3;
			int reminder = num % 3;
			sum += result;
			num = result + reminder;
			if (num == 2)
			{
				sum++;
				break;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
#endif