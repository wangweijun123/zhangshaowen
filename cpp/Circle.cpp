#include "Circle.h"

void Circle::setR(int r) {
	m_r = r;
}

void Circle::setCenter(Point p) {
	center = p;
}

double Circle::calculateZC() {
	return 2 * PI * m_r;
}

void  Circle::container(Point &outPoint) {
	double distance = (center.getX() - outPoint.getX()) * (center.getX() - outPoint.getX()) +
		(center.getY() - outPoint.getY()) * (center.getY() - outPoint.getY());
	double m_distance = m_r * m_r;
	if (distance > m_distance) {
		cout << " in circle " << endl;
	}
	else if (distance < m_distance) {
		cout << " out circle " << endl;
	}
	else {
		cout << " up circle " << endl;
	}
}
