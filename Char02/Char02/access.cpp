#include <stdio.h> 

struct SHuman
{
private:
	char name[12];
	int age;

public:
	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	SHuman Kim;
	//Kim.age = 286;
	Kim.intro();
}