
//数根可以通过把一个数的各个位上的数字加起来得到。如果得到的数是一位数，那么这个数就是数根；
//如果结果是两位数或者包括更多位的数字，那么再把这些数字加起来。如此进行下去，直到得到是一位数为止。
//比如，对于24 来说，把2 和4 相加得到6，由于6 是一位数，因此6 是24 的数根。
//再比如39，把3 和9 加起来得到12，由于12 不是一位数，因此还得把1 和2 加起来，最后得到3，这是一个一位数，因此3 是39 的数根。
//现在给你一个正整数，输出它的数根。

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
		nroot += num % 10;/*每次只获取个位数字*/
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