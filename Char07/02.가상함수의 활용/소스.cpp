#include <iostream>
using namespace std;

class CTest{

private:
	int num;
public:
	CTest(int anum) {
		num = anum;
		cout << num << "CTest constructor " << endl;
	};
	~CTest() {
		cout << num << "CTest deconstructor" << endl;
}
	void func() {
		cout << "CTest function()" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int subN;

public:
	CTestSub(int anum, int asubN) : CTest(anum) {
		subN = asubN;
		cout << subN << "CTest constructor " << endl;
	}
	~CTestSub() {
		cout << subN << "CTest deconstructor" << endl;
	}
	void func() {
		cout << "CTestSub function()" << endl;
	}
};

int main() {
	CTest b(10);
	b.func();
	CTestSub d(10, 20);
	d.func();

	CTest* pb = new CTestSub(30, 33);	// �߻� �ڷ������� �ڽ� ��ü�� ����Ű�� �Ѵ�.
	pb->func();
	
	delete pb; //�޸� ����

	return 0;
}