
#ifndef DROPLETS_H
#define DROPLETS_H

class Droplets {
  public:
   Droplets();									// default constructor
   Droplets(double, double, double );			// general constructor
   Droplets(const Droplets&);					// copy constructor
   ~Droplets();									// destructor
   inline double getX() const {return x;}
   inline double getY() const {return y;}
   inline double getA() const {return a;}
   inline double getRadian() const {return r;}
  private:
   double x;							// x-coord
   double y;							// y-coord
   double a;							// area
   double r;							// radian

   /*
    * x, y and a have to be greater than 0
    */
};

std::ostream &operator<<(std::ostream &, const Droplets&);
static const double getDistance(const Point &, const Point &);
#endif
