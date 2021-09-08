#include "Point.h"

const double PI = 3.14;

class Circle {

public:
	int m_r;

	Point center;

	void setR(int r);

	void setCenter(Point p);
	double calculateZC();

	void container(Point outPoint);

};
