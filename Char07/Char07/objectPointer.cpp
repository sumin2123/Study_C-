#include <stdio.h>
#include <string.h>

class Human {
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}84.7
};

class Student :public Human {
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}

	void intro() {
		printf("%d학번 %s입니다.\n", stunum, name);
	}

	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main() {
	Human h("김사람", 10);
	Student s("이학생", 15, 1234567);
	Human* pH;
	Student* pS;

	pH = &h; //당연히 가능
	pS = &s; //당연히 가능
	pH = &s; //가능
	//pS=&h; // 에러

	pS = (Student*)&h;
	pS->intro();
}