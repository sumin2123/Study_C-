#include <stdio.h> 

int main()
{
	int* pi;
	int* pj;

	pi = new int;
	pj = new int(10); // �����ڸ� ȣ���ϴ� ������������ �ٷ� �ʱ�ȭ�� �����ϴ�.

	*pi = 123;

	printf("*pi = %d\n", *pi);
	printf("*pj = %d\n", *pj);

	delete pi;
	delete pj;
}