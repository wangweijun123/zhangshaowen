// ͷ�ļ��з�ֹ�ظ�����
#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

const double PI = 3.14;

class Circle {

public:
	int m_r;

	Point center;

	void setR(int r);

	void setCenter(Point p);
	double calculateZC();

	void container(Point &outPoint);

};
