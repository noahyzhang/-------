//���дһ��������������������ӡ�����ʹ�� + �����������������
//
//��������int A��B���뷵��A��B��ֵ

#if 0
class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		int sum = 0;
		int carry = 0;
		while (B != 0)
		{
			sum = A ^ B;
			carry = (A & B) << 1;
			A = sum;
			B = carry;
		}
		return sum;
	}
};

#endif