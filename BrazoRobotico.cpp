#include "BrazoRobotico.h"
#include <iostream>
using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
	sujetandoObjeto = false;

}

double BrazoRobotico::get_x(){
	return x;
}

double BrazoRobotico::get_y(){
	return y;
}

double BrazoRobotico::get_z(){
	return z;
}

bool BrazoRobotico::get_SujetandoObjeto(){
	return sujetandoObjeto;
}

void BrazoRobotico::coger(){
	sujetandoObjeto = true;
}

void BrazoRobotico::soltar(){
	sujetandoObjeto = false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
}
