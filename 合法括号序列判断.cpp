//����һ���ַ����������һ���㷨���ж����Ƿ�Ϊһ���Ϸ������Ŵ���
//����һ���ַ���A�����ĳ���n���뷵��һ��boolֵ�������Ƿ�Ϊһ���Ϸ������Ŵ���

#if 0
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		if (n == 0 || n == 1)
			return false;
		stack<char> st;
		for (auto ele : A)
		{
			switch (ele)
			{
			case '(':
			{
				st.push('(');
				break;
			}
			case ')':
			{
				if (st.empty() || st.top() != '(')
					return false;
				st.pop();
				break;
			}
			default:
				return false;
			}
		}
		return true;
	}
};
#endif