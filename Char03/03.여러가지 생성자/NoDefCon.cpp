#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human momo();		//����
	Human arFriend[3];	//����

	Human arFriend[3] = {
		{Human("������", 49)},
		{Human("������", 49)},
		{Human("�ڻ�", 49)},
	};

	arFriend[2].intro();
}