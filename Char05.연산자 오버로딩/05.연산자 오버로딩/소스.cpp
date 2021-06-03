#include <iostream>

class MyTest {
private:
	int x;
	int y;

public:
	MyTest(int a = 0, int b= 0) { // ����Ʈ ������ ���� �����Ѱ�(����Ʈ �Ű�����)
		x = a;
		y = b;	// �ʱ�ȭ
	} // ����Ʈ �����ڰ� �������⿡ �������Ѵ�.

	const MyTest sum(const MyTest& other) const{ //����Լ� ����� , �ٲ�� �ȵǴϱ� const����
		MyTest res; //��ü����
		res.x = this-> x + other.x;
		res.y = this-> y + other.y;
		return res;
	}

	void printData() {
		printf("a: %d, b = %d", x, y);
	}
};

int main() {
	
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj;
	obj = obj.sum(obj2);
	obj.printData();

	return 0;
}