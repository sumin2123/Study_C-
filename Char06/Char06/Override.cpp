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
		printf("�̸�: %s, ���� = %d\n", name, age);
	}
};

class Student :public Human {
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}

	void intro() {
		printf("%d�й� %s�Դϴ�.\n\n", stunum,name);
	}
};


int main() {
	Human kim("�����", 29);
	kim.intro(); //�θ�
	Student han("���Ѱ�", 25, 123456);
	han.Human::intro();
}