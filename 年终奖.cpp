
//С�����ڹ�˾Ҫ�����ս�����С��ǡ�û������߸�������Ҫ�ڹ�˾����ϲ���һ���齱��Ϸ��
//��Ϸ��һ��6 * 6�������Ͻ��У��������36����ֵ���ȵ����ÿ��С���������������һ�����
//����Ҫ�����Ͻǿ�ʼ��Ϸ��ÿ��ֻ�����»��������ƶ�һ�����������½�ֹͣ��һ·�ϵĸ����������С�������õ���
//�����һ���㷨ʹС���õ���ֵ��ߵ����
//����һ��6 * 6�ľ���board������ÿ��Ԫ��Ϊ��Ӧ���ӵ������ֵ, ���Ͻ�Ϊ[0, 0], �뷵���ܻ�õ�����ֵ����֤ÿ�������ֵ����100С��1000��


#if 0
class Bonus {
public:
	int getMost(vector<vector<int> > board)
	{
		int length = board.size();
		int wideth = board[0].size();
		vector<vector<int>> dp(length + 1, vector<int>(wideth, 0));
		dp[0][0] = board[0][0];
		for (int i = 0; i < length; ++i)
		{
			for (int j = 0; j < wideth; ++j)
			{
				if (i == 0 && j == 0)
					continue;
				else if (i == 0) // ��һ��
				{
					dp[i][j] = dp[i][j - 1] + board[i][j];
				}
				else if (j == 0)
				{
					dp[i][j] = dp[i - 1][j] + board[i][j];
				}
				else
				{
					dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]) + board[i][j];
				}
			}
		}
		return dp[length - 1][wideth - 1];
	}
};

#endif