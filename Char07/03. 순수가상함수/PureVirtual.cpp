//순수 가상함수를 포함한 class = 가상(추상)클래스
// virtual void func() = 0; => 0; 은 순수가상함수
// 객체를 생성할 수 없다.
#include <stdio.h>

class Shape {
public:
	virtual void draw() = 0;
};

class Line:public Shape
{
public:
	virtual void draw() { puts("선을 긋습니다."); }
};

class Circle :public Shape {
public:
	virtual void draw(){puts("동그라미 그렸다 치고.");}
};

class Rect :public Shape {
public:
	virtual void draw() { puts("요건 사각형입니다."); }
};

int main() {
	Shape *pS[3];

	//Shape s;
	pS[0] = new Line;
	pS[1] = new Circle;
	pS[2] = new Rect;

	for (int i = 0; i < 3; i++) {
		pS[i]->draw();
	}

	for (int i = 0; i < 3; i++) {
		delete pS[i];
	}
}

// 공동의 조상이 없다면 도형의 집합을 한번에 정의할 수  없다.
// 이들은 비슷한 형제 관계 일뿐 IS A관계가 성립하지 않는다.