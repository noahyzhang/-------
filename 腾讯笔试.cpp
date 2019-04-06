#if 0
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	long int n = 0;
	cin >> n;
	int count = n;
	vector<int> vec;
	for (int i = 0; i < n; ++i)
	{
		int tmp = 0;
		cin >> tmp;
		vec.push_back(tmp);
	}

	for (int i = 1; i < n; i++)
	{
		if(i == n-1)

		if (vec[i - 1] != vec[i])
		{
			count -= 2;
			if(i != n-2)
				i++;
		}
	}
	cout << count << endl;
	return 0;
}
#endif


//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1;
//	long int n = 0;
//	cin >> n >> s1;
//	int count = 0;
//	vector<int> vec;
//	int tmp = 0;
//	tmp = s1[0] - '0';
//	vec.push_back(tmp);
//	count = tmp;
//	for (int i = 1; i < n; ++i)
//	{
//		tmp = s1[i] - '0';
//		if (count != tmp)
//		{
//			if (!vec.empty())
//				vec.pop_back();
//			if (!vec.empty())
//				count = vec.back();
//			else
//			{
//				if (i != n-1)
//					count = s1[i + 1] - '0';
//			}
//		}
//		else
//		{
//			vec.push_back(tmp);
//		}
//	}
//	cout << vec.size();
//	return 0;
//}

#if 0
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int m, n, arr[106], res = 0;
	int i, x, tal = 0, t;
	cin >> m >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	arr[n + 1] = m + 1;
	sort(arr + 1, arr + n + 2);

	if (arr[1] != 1)
	{
		cout << '-1';
		return 0;
	}
	for (i = 2; i <= n + 1 && arr[i] <= m + 1; i++)
	{
		if (arr[i] - 1 <= tal)
			continue;
		t = (int)ceil(1.0*arr[i] - 1 - tal) / arr[i - 1];
		res += t;
		tal += arr[i - 1] * t;
	}
	cout << res+1;
	return 0;
}

#endif

#if 0
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long int> vec;
	vector<int> sec;
	long long int tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		vec.push_back(tmp);
	}
	int tmp2;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp2;
		sec.push_back(tmp2);
	}
	long long int wuli = 0;
	int money = 0;
	for (int i = 0; i < n; i++)
	{
		if (wuli < vec[i])
		{
			money += sec[i];
			wuli += vec[i];
		}
	}
	cout << money << endl;
	return 0;
}

#endif