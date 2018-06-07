/*
 * Area.h
 *
 *  Created on: May 18, 2018
 *      Author: l.hofer
 */

#ifndef AREA_H_
#define AREA_H_

class Area {
  public:
   Area(){}										// default constructor
   Area(unsigned int, double, double );			// general constructor
   Droplets(const Droplets&);					// copy constructor
   ~Droplets();									// destructor
   inline double getX() const {return x;}
   inline double getY() const {return y;}
   inline double getA() const {return a;}
  private:
   unsigned int n;								// number of points
   double



};



#endif /* AREA_H_ */
