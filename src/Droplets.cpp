#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include "Droplets.h"

/* constructors */

inline Droplets::Droplets()			: x(-1.), y(-1.), a(-1.), r(-1.) {}
Droplets::Droplets(double xW, double yW, double aW){
	x = xW;
	y = yW;
	a = aW;
	r = std::sqrt(a/ (M_PI) )
}
Droplets::Droplets(const Droplets& c){
	x = c.x;
	y = c.y;
	a = c.a;
	r = c.r;
}

std::ostream &operator<<(std::ostream & os, const Droplets& d){
	return os << "( x=" << d.getX() <<" ; y=" << d.getY() <<
			" ; area="<<d.getA();
}

static const double getDistance(const Point & a, const Point & b){
	return (std::sqrt(std::pow(a.getX()-b.getX(), 2) +
			std::pow(a.getY()-b.getY(), 2)));
}
