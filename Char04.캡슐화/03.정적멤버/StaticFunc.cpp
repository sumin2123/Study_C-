#include <iostream>

class StaticTest {
public:
	int a;
	static int b;	// Static ��� ���� ����
	StaticTest() {
		a = 10;
		b = 20;	//Ŭ���� ���ο��� �ʱ�ȭ�� �ȵȴ�.
		b++;
	}
	void getData() {
		printf("a: %d, b:%d\n", a, b);
	}

};

int main() {
	return 0;
}