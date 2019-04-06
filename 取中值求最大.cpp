//链接：https://www.nowcoder.com/questionTerminal/6736cc3ffd1444a4a0057dee89be789b?orderByHotValue=1&page=1&onlyReference=false
//来源：牛客网
//
//牛牛举办了一次编程比赛, 参加比赛的有3*n个选手, 每个选手都有一个水平值a_i.现在要将这些选手进行组队, 一共组成n个队伍,
//即每个队伍3人.牛牛发现队伍的水平值等于该队伍队员中第二高水平值。
//例如 :
//一个队伍三个队员的水平值分别是3, 3, 3.那么队伍的水平值是3
//一个队伍三个队员的水平值分别是3, 2, 3.那么队伍的水平值是3
//一个队伍三个队员的水平值分别是1, 5, 2.那么队伍的水平值是2
//为了让比赛更有看点, 牛牛想安排队伍使所有队伍的水平值总和最大。
//如样例所示 :
//如果牛牛把6个队员划分到两个队伍
//如果方案为 :
//team1: {1, 2, 5}, team2 : {5, 5, 8}, 这时候水平值总和为7.
//	而如果方案为 :
//	team1 : {2, 5, 8}, team2 : {1, 5, 5}, 这时候水平值总和为10.
//	没有比总和为10更大的方案, 所以输出10.

//思路是这样的 先排序
//* 比如排完序 1 2 3 4 5 6 7 8 9 这九个数
//* 组队思路是这样的 第一个最后两个 1 8 9
//* 剩下 2 3 4 5 6 7
//* 第一个最后两个                 2 6 7
//* 剩下                           3 4 5
//* 就是第一个和最后两个 再把已经组队的删掉 然后在循环 第一个最后两个
//* 那么中位数可以看到是 8 6 4
//* 找到中位数在整个排序后的素组和下标的规则是 data[data.length - (2 * (i + 1))]
//* 再加在一起
//* 最重要的是 result一定要是long的 一定 一定 int会越界
#if 0
#include<iostream>
#include<algorithm>
#include<vector>

int main() 
{
	long n = 0;
	std::cin >> n;
	std::vector<long int> vec;
	for (long i = 0; i < 3 * n; i++)
	{
		long int tmp = 0;
		std::cin >> tmp;
		vec.push_back(tmp);
	}
	std::sort(vec.begin(), vec.end());
	long long int result = 0;
	long int j = 0;
	for (long int i = 0, j = 3 * n - 2; j > i; i++, j -= 2)
	{
		result += vec[j];
	}
	std::cout << result << std::endl;
	return 0;
}

#endif

