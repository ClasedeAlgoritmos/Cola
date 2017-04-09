#include "Cola.h"

Cola::Cola(){
	this->H=NULL;
	this->T=NULL;
}

bool Cola::IsVacio(){                        //Método para validar si existe o no la Cola
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}

void Cola::Encolar(int Dato){                //Método para ingresar un nuevo nodo a la cola, este nodo quedará
	Nodo * aux = new Nodo(Dato);              //Insertado después del último nodo que se insertó
	if (!IsVacio()){
		T->setSig(aux);
		T=aux;
		this->T->setSig(NULL);		
	}
	else{
		this->H=aux;
		this->T=aux;
	}
}
int Cola::Desencolar(){                   //Método para eliminar un nodo de la cola
	if (!IsVacio()){
		int Dato =this->H->getDato();	
	   if (this->H==NULL){
	   	this->T=NULL;
	   }
	   this->H=this->H->getSig();
	   return Dato;
	}
	   else{
		std::cout<<"La lista esta vacia"<<std::endl;		
	   }
      

Nodo * Lista::Buscar(int Dato){                       //Método para buscar un nodo dentro de la cola
   if (IsVacio()){
		std::cout<<"El dato no se encuentra"<<std::endl;
		return NULL;		
	}
    Nodo * aux = this->H;
   	while(aux->getDato()!=Dato&&aux!=NULL){
		aux=aux->getSig();				
	   if (aux==NULL){
			std::cout<<"El dato no se encuentra"<<std::endl;
			return NULL;
	   }
	if (aux->getDato()==Dato)
	{
		std::cout<<aux->getDato()<<"Se encontró dato"<<std::endl;	  
   }
   return aux;
}

void Cola::MostrarCola(){                    //Método para mostrar los elementos de la cola
	Nodo* aux = this->H;
	while(aux!=NULL){
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}