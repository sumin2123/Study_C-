#include <stdio.h> 

int main()
{
	enum origin{EAST,WEST,SOUTH,NORTH};
	enum origin mark = WEST;
	printf("%d ����\n", mark);

	typedef struct
	{
		char name[12];
		int age;
		double height;
	}SHuman;

	//struct SHuman kim = { "�����", 29,181.4 };
	SHuman kim = { "�����", 29,181.4 };
	printf("�̸� = %s, ���� = %d \n", kim.name, kim.age);
}