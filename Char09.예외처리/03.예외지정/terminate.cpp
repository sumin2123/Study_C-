/*	
�ƹ��� ó������ �ʴ� ���ܴ� terminate�Լ��� ó���ϸ�, ���������� abort�Լ��� ȣ���Ͽ� ���α׷��� ���� �����Ѵ�.

*/

#include <stdio.h>
#include <exception>
using namespace std;

void myterm()
{
	puts("ó������ ���� ���� �߻�");
	exit(-1);
}

int main()
{
	set_terminate(myterm);
	try {
		throw 1;
	}
	catch (char* m) {

	}
}