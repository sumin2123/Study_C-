#include <stdio.h>

template<typename T>
T cast(int s)
{
	return (T)s; 
	// cast�Լ��� �μ��� ���޵� �������� s�� TŸ������ ĳ�����Ͽ� �����Ѵ�.
}

int main() {

	//cast(1234) => � Ÿ���� �����ϴ� �Լ��� ������ ������ ������ ������ ó��
	// ���⼭ 1234 ��  cast�Լ��� �μ��� �� T�� �����ϴ� �� ��ƮX
	// ȣ�⹮�� Ÿ�� �μ��� ��Ÿ���� �ʾ� �ָ��ϱ⶧���� ��������� ���ϴ� Ÿ���� �������Ѵ�.
	unsigned u = cast<unsigned>(1234); 
	double d = cast<double>(5678);

	printf("u=%d, d=%f\n", u, d);
}