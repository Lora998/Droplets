#include<iostream>
#include "Droplets.h"

/* Konstruktoren */

inline Droplets::Droplets()			: x(-1.), y(-1.), a(-1.) {}
inline Droplets::Droplets(double xW,
		double yW, double aW)			: x(xW), y(yW), a(aW) {}
Droplets::Droplets(const Droplets& c){
	x = c.x;
	y = c.y;
	a = c.a;
}

std::ostream &operator<<(std::ostream & os, const Droplets& d){
	return os << "( x=" << d.getX() <<" ; y=" << d.getY() <<
			" ; area="<<d.getA();
}
