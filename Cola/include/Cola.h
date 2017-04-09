#include "Nodo.h"

class Cola {
public:
   //Atributos
	Nodo* H;
	Nodo* T;	
   //Constructores
   Cola (int Dato);
	Cola();
	void Encolar(int Dato);
	int Desencolar();
	bool IsVacio();
   Nodo* Buscar(int ref);
   void MostrarCola();
}