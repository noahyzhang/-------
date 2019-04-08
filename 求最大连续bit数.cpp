//
//功能: 求一个byte数字对应的二进制数字中1的最大连续数，例如3的二进制为00000011，最大连续2个1
//
//	输入 : 一个byte型的数字
//
//	输出 : 无
//
//	返回 : 对应的二进制数字中1的最大连续数

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