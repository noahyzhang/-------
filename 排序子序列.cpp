//链接：https://www.nowcoder.com/questionTerminal/2d3f6ddd82da445d804c95db22dcc471?orderByHotValue=1&page=1&onlyReference=false
//来源：牛客网
//
//牛牛定义排序子序列为一个数组中一段连续的子序列, 并且这段子序列是非递增或者非递减排序的。
//牛牛有一个长度为n的整数数组A, 他现在有一个任务是把数组A分为若干段排序子序列, 牛牛想知道他最少可以把这个数组分为几段排序子序列.
//如样例所示, 牛牛可以把数组A划分为[1, 2, 3]和[2, 2, 1]两个排序子序列, 至少需要划分为2个排序子序列, 所以输出2
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
			if (i != n - 3)  //如果遇见波峰或者波谷，则说明i++已经比过了，但是要注意越界
				i++;
		}
	}
	std::cout << res << std::endl;
	return 0;
}
#endif