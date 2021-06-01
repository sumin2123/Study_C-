#include <stdio.h>

class Time {
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	//explicit - ����� ��ȯ�� ���
	explicit Time(int abssec) { // ��ȯ������ - �ӽð�ü�� �����Ͽ� ��ȯ�ϰ�, ����� �����Ѵ�.
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime() {
		printf("���� �ð��� %d:%d:%d�Դϴ�.\n", hour, min, sec);
	}
};

void printTime(Time When)
{
	When.OutTime();
}

int main()
{
	Time noon(40000);
	noon.OutTime();
	noon = 7000;
	//Time now = 6000;
	//now.OutTime();
	//now = 7000;
	//now.OutTime();

	//printTime(80000);
}