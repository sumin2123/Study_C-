#include "cursor"
#include <stdio.h>
using namespace std;

template <typename T>
class PosValue
{
private:
	int x, y;
	T value;
public:
	PosValue(int ax, int ay, T av) : x(ax), y(ay), value(av) {}
	void outvalue() {
		gotoxy(x, y);
		cout << value << endl;
	}
};

int main() {
	PosValue<int>iv(10, 10, 2);
	PosValue<char>cv(25, 5, 'C');
	PosValue<double>dv(30, 15, 3.14);
	iv.outvalue();
	cv.outvalue();
	dv.outvalue();
}

// ���ø� Ŭ������ Ÿ�Ը��� ������ <> ��ȣ�� �Բ� ����ٴϸ�, ��ü�� ������ �� <> ��ȣ �ȿ� ���ϴ� Ÿ���� ������.
// PosValue�� Ŭ������ �ƴ϶� ��ü�� ������ �� ����.
