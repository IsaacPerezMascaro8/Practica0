#include "BrazoRobotico.h"
#include <iostream>
using namespace std;

int main(){

	BrazoRobotico brazo1(0.0, 0.0, 0.0);
	cout << "El brazo se ha iniciado en las coordenadas: " << brazo1.get_x() <<", " << brazo1.get_y() << ", " << brazo1.get_z() << endl;
	cout << "¿Está sujetando un objeto? " << (brazo1.get_SujetandoObjeto() ? "Sí" : "No") << endl;
	
	brazo1.mover(3.5, 6.2, 3.3);
	cout << "El brazo se ha movido en las coordenadas: " << brazo1.get_x() <<", " << brazo1.get_y() << ", " << brazo1.get_z() << endl;
	
	brazo1.coger();
	cout << "¿Está sujetando un objeto? " << (brazo1.get_SujetandoObjeto() ? "Sí" : "No") << endl;
	
	return 0;

}
