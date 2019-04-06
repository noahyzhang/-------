#if 0
// write your code here cpp
#include<iostream>
#include<set>
using namespace std;

int main()
{
	long int n = 0;
	set<int> st;
	while (cin >> n)
	{
		int pum = 2;
		int count = 0;
		while (n != 1)
		{
			while (n % pum == 0)
			{
				n /= pum;
				st.insert(pum);
			}
			pum++;
		}
		cout << st.size() << endl;
		st.clear();
	}
	return 0;
}
#endif