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
   Area(){}										// Default-Konstruktor
   Area(unsigned int, double, double );			// allg. Konstruktor
   Droplets(const Droplets&);					// Kopierkonstruktor
   ~Droplets();									// Destruktor
   inline double getX() const {return x;}
   inline double getY() const {return y;}
   inline double getA() const {return a;}
  private:
   unsigned int;

   /*
    * x, y und A muessen groesser, gleich 0 sein
    */
};



#endif /* AREA_H_ */
