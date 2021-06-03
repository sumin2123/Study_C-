#include <iostream>

class MyTest {
private:
	int x;
	int y;

public:
	MyTest(int a = 0, int b = 0) {
		x = a;
		y = b;
		printf("�μ� 2�� ������!!\n");
	}
	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y) {
		printf("��������� ȣ��!!\n");
	}

	// + ������ 
	const MyTest operator +(const MyTest& other) const {
		MyTest res;
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;
	}


	//// ���Կ�����
	const MyTest operator =(const MyTest& other)/* const*/ {
		//MyTest res;
		x = other.x;
		y = other.y;
		return *this;
	}


	//���� ������ �Լ� ���� ������ �Լ�
	friend const MyTest operator -(const MyTest& rhs1, const MyTest& rhs2);

	void printData() {
		printf("\n\na: %d, b: %d", x, y);
	}

	const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2) {
		MyTest res;
		res.x = rhs1.x - rhs2.x;
		res.y = rhs1.y - rhs2.y;
		return res;
	}

};

int main() {
	MyTest obj1(20, 10);
	MyTest obj2(15, 5);
	MyTest obj;
	
	//obj3 = obj1 + obj2;	+������ ����
	//obj = obj1.operator= (obj2);
	// �� ���� ������ ����

	//
	obj = operator-(obj1, obj2);
	obj.printData();
	obj.printData();

}

