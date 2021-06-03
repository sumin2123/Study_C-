#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
protected:	// ����� ���� �� ����Ѵ�. ����� ���� ���� �ƴϸ� ���� X
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

class Student :public Human
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}

	void report() {
		printf("�̸�: %s, �й�: %d ���� �����մϴ�.\n\n", name, stunum);
	}
};

int main() {
	Student han("���Ѱ�", 15, 123456);
	Student Park("�ڼ���", 23, 1813130);
	han.intro();
	han.study();
	han.report();
	Park.intro();
	Park.study();
	Park.report();
}