/* Human Ŭ������ ��� ������ ����� �׼��� �Լ� �ۼ�
	�̸�[12], �� �̻��� �� ���ڿ��� �����Ѵ�.
	���� = 1~ 120 ������ �����ϰ� ���� ���� ���̴� 0�� �����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	Human(const char *n, int a) {
		Setname(n);
		Setage(a);
	}
	void intro() {
		printf("�̸� : %s, ���� : %d\n", name, age);
	}

	char* Getname() { return name; }
	void Setname(const char *n) { 
		if (strlen(n) < 12) {
			strcpy(name, n);
		}
		else {
			strcpy(name, "");
		}
	}

	int Getage() { return age; }
	void Setage(int a) {
		if (a >= 1 && a <= 120) {
			age = a;
		}
		else {
			age = 0;
		}
	}
};

int main() {
	Human Park("�ڼ���", 23);
	Park.Setname("Park Sumin");
	Park.Setage(23);
	Park.intro();
}