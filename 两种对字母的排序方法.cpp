//考拉有n个字符串字符串，任意两个字符串长度都是不同的。考拉最近学习到有两种字符串的排序方法：
//1.根据字符串的字典序排序。例如：
//"car" < "carriage" < "cats" < "doggies < "koala"
//	2.根据字符串的长度排序。例如：
//	"car" < "cats" < "koala" < "doggies" < "carriage"
//	考拉想知道自己的这些字符串排列顺序是否满足这两种排序方法

#if 0
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool CheckZimu(vector<string> vec)
{
	for (int i = 1; i < vec.size(); ++i)
	{
		if (strcmp(vec[i - 1].c_str(), vec[i].c_str()) > 0)
			return false;
	}
	return true;
}

bool CheckLength(vector<string> vec)
{
	for (int i = 1; i < vec.size(); ++i)
	{
		if (vec[i - 1].size() > vec[i].size())
			return false;
	}
	return true;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<string> vec;
	string tmp;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		vec.push_back(tmp);
	}
	bool zimu = CheckZimu(vec);
	bool len = CheckLength(vec);

	if (zimu == true && len == false)
		cout << "lexicographically";
	else if (zimu == false && len == true)
		cout << "lengths";
	else if (zimu == false && len == false)
		cout << "none";
	else
		cout << "both";
	return 0;
}
#endif