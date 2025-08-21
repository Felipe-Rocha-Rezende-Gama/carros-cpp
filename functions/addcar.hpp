#ifndef ADDCAR_HPP
#define ADDCAR_HPP


#include <iostream>
#include <string>
//Another includes:
#include "carro.hpp"
#include "linha.hpp"

void addCar(){
   Carro car;
   string resp;


   cout << "======== Add Car =======";
   cout << "\n";

   do
   {
      system("cls"); //Limpa a tela para embelezamento

      linha('-', 70);
      car.set_car_data();
      linha('-', 70);

      /*Criar alocação de carros nas vagas*/

   } while (resp == "s");
   
}




#endif