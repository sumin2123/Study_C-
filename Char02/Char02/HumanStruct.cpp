// class = ����ü + ����Լ�

#include <iostream>

struct Human
{
public:
	char name[20];
	float height;
	float weight;
	int age;
	char blood;

	void view()
	{
		printf("���� �̸��� %s�̰�, Ű�� %f�̰� �����Դ� %f�̰�, ���̴� %d�̰�, �������� %c �Դϴ�.",name,height, weight, age, blood);
	}
};

int main()
{
	Human my = { "ȫ�浿", 182, 78, 40, 'B' };
	my.view();
	return 0;
}