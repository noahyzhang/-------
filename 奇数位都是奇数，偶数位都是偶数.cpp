//����һ�����Ȳ�С��2������arr�� дһ����������arr��ʹarr��Ҫô���е�ż��λ�϶���ż����Ҫô���е�����λ�϶��������ϡ� 
//Ҫ��������鳤��ΪN��ʱ�临�Ӷ���ﵽO(N)������ռ临�Ӷ���ﵽO(1),
//�±�0, 2, 4, 6...����ż��λ, �±�1, 3, 5, 7...��������λ������[1, 2, 3, 4]����Ϊ[2, 1, 4, 3]����

#if 0

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void oddInOddEvenInEven(vector<int>& arr, int len) 
{
	int i = 0, j = 1;
	while (i < len && j < len)
	{
		//�ж�ż��λ�Ƿ���ż��������Ϊż����ͣ��
		while (i < len && (arr[i] % 2) == 0) i += 2;
		//�ж�����λ�Ƿ���������������������ͣ��
		while (j < len && (arr[j] % 2) != 0) j += 2;
		//�����������ֽ���λ���滻
		if(i < len && j < len)
			swap(arr[i], arr[j]);
	}
}

int main()
{
	int arr[] = { 7, 7, 9, 5, 1, 6, 7, 9, 3, 2, 6 };
	vector<int> vec(arr, arr + 11);
	oddInOddEvenInEven(vec, 11);
	return 0;
}
#endif