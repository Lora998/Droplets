/*
 * CreateArea.cpp
 *
 *  Created on: Jun 8, 2018
 *      Author: l.hofer
 */


 #include "Area.h"
 #include <iostream>
 using namespace std;

 int main(){
 	cout << "Test" << endl;
    Area a ;
    for(Droplets d : a.getDroplets() ){
        cout << d << endl;
    }
 	return 0;
 }
