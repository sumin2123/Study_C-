/* ���� �ѰͰ� �ٸ� ����� �ڵ�*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
	char name[12];
	int age;

public:
	void setName(char *name) {
		strcpy(this->name, name);
	}
	void getName() {
		printf("%s", name);
	}
};

int main()
{
	Human i;
	char tempName[100];
	printf("�̸��� �Է��ϼ��� : ");
	cin >> tempName;
	i.setName(tempName);
	i.getName();
	return 0;
}