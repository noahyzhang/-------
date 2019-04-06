//对于一个字符串，请设计一个算法，判断其是否为一个合法的括号串。
//给定一个字符串A和它的长度n，请返回一个bool值代表它是否为一个合法的括号串。

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