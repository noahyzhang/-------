//һ�������� N ��Ԫ�أ�����������������͡�
//���磺[-1, 2, 1]������������������Ϊ[2, 1]�����Ϊ 3

#if 0
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<int> vec;
	int tmp = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		vec.push_back(tmp);
	}
	int result = vec[0];
	int sum = 0;
	for (int i = 1; i < n; ++i)
	{
		sum += vec[i];
		if (sum > result)
			result = sum;
		if (sum < 0)
			sum = 0;
	}
	cout << result;
	return 0;
}
#endif