/*
 * Triangle.cpp
 *
 *  Created on: 15.05.2017 ã.
 *      Author: Venci
 */

#include "Triangle.h"

Triangle::Triangle() {
	// TODO Auto-generated constructor stub
	setA(0);
	setB(0);
	setC(0);
	setH(0);
}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

int Triangle::getA() const {
	return a;
}

void Triangle::setA(int a) {
	this->a = a;
}

int Triangle::getB() const {
	return b;
}

void Triangle::setB(int b) {
	this->b = b;
}

int Triangle::getC() const {
	return c;
}

void Triangle::setC(int c) {
	this->c = c;
}

int Triangle::getH() const {
	return h;
}

bool Triangle::operator >=(Triangle& right) {
if(this->a >= right.a && this->b >= right.b && this->c >= right.c && this->h >= right.h)
	return true;
	return false;
}

bool Triangle::operator ==(Triangle& right) {
	if(this->a == right.a && this->b == right.b && this->c == right.c && this->h == right.h)
		return true;
		return false;
}

bool Triangle::operator !=(Triangle& right) {
	if(this->a != right.a && this->b != right.b && this->c != right.c && this->h != right.h)
		return true;
		return false;
}

Triangle::Triangle(int int1, int int2, int int3, int int4) {
	setA(a);
	setB(b);
	setC(c);
	setH(h);
}

void Triangle::setH(int h) {
	this->h = h;
}
