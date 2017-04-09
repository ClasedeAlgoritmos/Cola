#include "Cola.h"


int main(){
   int ValorInsertado;
   int Opcion;
   int Dato;
   int Ref;
   
   cout<<"Selecciona la opción que desees realizar "<<end1;    //Se inserta en un menú las funciones que puede
   cout<<"1) Crear Cola"<<end1;                                //Realizar la cola
   cout<<"2) Encolar"<<end1;
   cout<<"3) Desencolar"<<end1;  
   cout<<"4) Buscar"<<end1; 
   cout<<"5) Mostrar Cola"<<end1;
   cout<<"6) Salir"<<end1;
   cin<<ValorInsertado;
      
    if (Opcion <1 || Opcion > 6){                  //Se limita el menú a sólo caracteres válidos
         cout<<"Opción no válida"<<end1;
         return Opcion;
       }
    do{
      switch (ValorInsertado){                     //Se crean los casos posibles que puede manejar la pila
      case '1':                                    //Obteniéndolos de los métodos ya creados
         Cola c = Cola();
         if (c.IsVacio()){
          cout<<"Error al generar la lista"<<end1;
         }
          cout<<"Se creó lista"<<end1;
          break;
      case '2':
          cout<<"Ingresa Dato a Encolar"<<end1;
          cin>>Dato;
          c.Encolar(Dato);  
          break;
      case '3':
          cout<<"Ingresa Dato a Desencolar"<<end1;
          c.Desencolar();
          break;
      case '4':
          cout<<"Selecciona Dato a Buscar"<<end1;
          cin>>Dato
          c.Buscar(Dato);
          break;
      case '5':
          cout<<"Cola:"<<end1;
          c.MostrarCola();
          break;
   }while (Opcion!=6);
         cout<<"Gracias"<<end1;
}