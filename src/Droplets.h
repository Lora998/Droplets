
#ifndef DROPLETS_H
#define DROPLETS_H

class Droplets {
  public:
   Droplets();									// Default-Konstruktor
   Droplets(double, double, double );			// allg. Konstruktor
   Droplets(const Droplets&);					// Kopierkonstruktor
   ~Droplets();									// Destruktor
   inline double getX(){return x;}
   inline double getY(){return y;}
   inline double getA(){return a;}


  private:
   double x;							// x-Koordinate
   double y;							// y-Koordinate
   double a;							// Flaeche
   /*
    * x, y und A muessen groesser, gleich 0 sein
    */
};

std::ostream &operator<<(std::ostream &, const Droplets&);

#endif
