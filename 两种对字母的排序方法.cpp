//������n���ַ����ַ��������������ַ������ȶ��ǲ�ͬ�ġ��������ѧϰ���������ַ��������򷽷���
//1.�����ַ������ֵ����������磺
//"car" < "carriage" < "cats" < "doggies < "koala"
//	2.�����ַ����ĳ����������磺
//	"car" < "cats" < "koala" < "doggies" < "carriage"
//	������֪���Լ�����Щ�ַ�������˳���Ƿ��������������򷽷�

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