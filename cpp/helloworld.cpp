#include<iostream>
using namespace std;

#include "Point.h"
#include "Circle.h"


int main() {
	// 难道这是
	Circle c;
	c.m_r = 1;
	double re = c.calculateZC();
	cout << "re = " << re << endl;
	Point centerP;
	centerP.setX(1);
	centerP.setY(1);

	c.setCenter(centerP);


	Point p; 
	p.setX(3);
	p.setY(1);

	c.container(p);

	//cout << "x = " << p.getX() << ", y = " << p.getY() << endl;

	system("pause");

	return 0;
}
