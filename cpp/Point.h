// ͷ�ļ��з�ֹ�ظ�����
#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	Point();
	~Point();

	int getX();

	void setX(int x);

	int getY();

	void setY(int y);

private:
	int x;
	int y;
};
