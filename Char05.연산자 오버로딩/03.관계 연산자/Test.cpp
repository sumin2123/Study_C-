
//1) �����
//2) ���������
//3) ���۷�����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char *name;
	int age;

public:
	Human() {}
	Human(const char* n, int a) { 
		name = new char[strlen(n)+1]; //�����Ҵ�
		strcpy(name, n);
		age = a; 
	}

	~Human() {	// �����Ҵ� ����
		delete[]name;
	}

	void printHuman() {
		printf("�̸� = %s , ���� = %d\n", name, age);
	}
};

void main() {
	
	Human h1("�ڼ���", 23);
	h1.printHuman();

	Human Nhn(h1);
	Nhn.printHuman(); // ���� ������ ȣ��

	Human Xman;
	Xman = Nhn;
	Xman.printHuman(); //���� ������ �Լ� ȣ��

	return 0;

}