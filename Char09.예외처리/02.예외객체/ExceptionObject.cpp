#include <stdio.h>

class Exception
{
private:
	int Errorcode;

public:
	Exception(int ae) :Errorcode(ae) {}
		int GetErrorCode() { return Errorcode; }
		void ReportError() {
			switch (Errorcode)
			{
			case 1:
				puts("�޸𸮰� �����մϴ�.");
				break;

			case 2:
				puts("���� ������ �ʰ��߽��ϴ�.");
				break;

			case 3:
				puts("�ϵ� ��ũ�� ���� á���ϴ�.");
				break;
					
			default:
				break;
			}
		}
	
};

void report() {

	if (true/*���ܹ߻�*/) throw Exception(3);
	//���� ���� ������ ������ �۾� �Ϸ�
}

int main() {
	try
	{
		report();
		puts("�۾��� �Ϸ��߽��ϴ�.");
	}
	catch (Exception &e)
	{
		printf("����  �ڵ� = %d => ", e.GetErrorCode());
		e.ReportError();
	}
}