//���ӣ�https://www.nowcoder.com/questionTerminal/2d3f6ddd82da445d804c95db22dcc471?orderByHotValue=1&page=1&onlyReference=false
//��Դ��ţ����
//
//ţţ��������������Ϊһ��������һ��������������, ��������������Ƿǵ������߷ǵݼ�����ġ�
//ţţ��һ������Ϊn����������A, ��������һ�������ǰ�����A��Ϊ���ɶ�����������, ţţ��֪�������ٿ��԰���������Ϊ��������������.
//��������ʾ, ţţ���԰�����A����Ϊ[1, 2, 3]��[2, 2, 1]��������������, ������Ҫ����Ϊ2������������, �������2
#if 0
#include<iostream>
#include<vector>

int main()
{
	long n = 0;
	std::cin >> n;
	std::vector<long long int> vec;
	long long int tmp = 0;
	for (long i = 0; i < n; i++)
	{
		std::cin >> tmp;
		vec.push_back(tmp);
	}
	long int res = 1;
	for (int i = 1; i < n-1; i++)
	{
		if ((vec[i - 1] > vec[i] && vec[i] < vec[i + 1]) || (vec[i - 1] < vec[i] && vec[i] > vec[i + 1]))
		{
			res++;
			if (i != n - 3)  //�������������߲��ȣ���˵��i++�Ѿ��ȹ��ˣ�����Ҫע��Խ��
				i++;
		}
	}
	std::cout << res << std::endl;
	return 0;
}
#endif