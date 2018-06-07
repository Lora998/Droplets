/*
 * Area.cpp
 *
 *  Created on: May 18, 2018
 *      Author: l.hofer
 */

#include "Area.h"

/*
 * default constructor
 * used for testing
 */
Area::Area(){
	n = 5;
	width = 10.;
	height = 10.;
	angle_min = 0.1;
	angle_max = 89.9;
	angle_mean = 10.;
	angle_stddev = 5.;
	d_area_min = 0.001;
	d_area_max = 1.;
	d_area_mean = 0.2;
	d_area_stddev = 0.05;
	distributeDroplets();
}

Area::Area(unsigned int nW, double wW, double hW, double aMinW, double aMaxW, double aMeanW,
		double aSW, double dMinW, double dMaxW, double dMeanW, double dSW){
	n = nW;
	width = wW;
	height = hW;
	angle_min = aMinW;
	angle_max = aMaxW;
	angle_mean = aMeanW;
	angle_stddev = aSW;
	d_area_min = dMinW;
	d_area_max = dMaxW;
	d_area_mean = dMeanW;
	d_area_stddev = dSW;
	distributeDroplets();
}

Area::void distributeDroplets(){

	for(int i = 0; i < n; ++i){

	}
}

bool isValidDroplet(const &Droplets d){
	for( Droplets ds : droplets){
		double distance = getDistance(d, ds);
		if( distance < d.getRadian() || distance < ds.getRadian()){
			return false;
		}
	}
	return true;
}
std::vector<Droplets> droplets;
