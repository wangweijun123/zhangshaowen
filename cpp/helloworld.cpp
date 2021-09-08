#include<iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

int main() {
	Circle c;
	c.m_r = 1;
	double re = c.calculateZC();
	cout << "re = " << re << endl;
	Point centerP;
	centerP.setX(1);
	centerP.setY(1);

	c.setCenter(centerP);


	Point p; 
	p.setX(2);
	p.setY(1);

	c.container(p);

	//cout << "x = " << p.getX() << ", y = " << p.getY() << endl;

	system("pause");

	return 0;
}
