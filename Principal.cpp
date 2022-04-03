#include <iostream>
using namespace std;

char letra;

int main() {
	do {
		cout << "\n-----------" << endl;
		cout << "hola mi nombre es Quispe Torrez Ever \nNacido el 02 de Enero de 199, Uyuni-Potosi-Bolivia" << endl;
		cout << "Preparacion inicial y Secundaria en la cuidad de Uyuni \nSalido bachiller del Colegio Tenico Humanistico Daniel Campos A " << endl;
		cout << "Estudiate de La Universidad Mayor, Real y Pontificia de San Francisco Xavier de Chuquisaca" << endl;
		cout << "Facultad de Ciencias de la Tecnologia, Carrera de Ingenieria de Sistemas con: \nCU: 35-4505 \nCI: 10463104" << endl;
		cout << "Gustos y pasatiempos: \nFutbol, basquet; \nVideo juegos, peliculas" << endl;
		cout << " \n " << endl;
		cout << "Repetir letra S \nCerrar letra C " << endl;
		cin >> letra;
	} while (letra != 'c');
	return 0;
}