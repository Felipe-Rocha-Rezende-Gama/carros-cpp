#ifndef CARRO_HPP
#define CARRO_HPP

#include <iostream>
#include <string>

#include "addcar.hpp"

using namespace std;

class Carro{
   private:
      string placa, modelo;
   public:
      Carro(){
         placa = "";
         modelo = "";
      }
      ~Carro(){
      }
      void set_car_data(){
         cout << "\nPlaca: ";
         getline(cin >> ws, placa);
         cout << "Modelo: ";
         getline(cin >> ws, modelo);
         cout << "\n";
      }
      void get_car_data(){
         cout << "\nPlaca: " << placa;
         cout << "\nModelo: " << modelo;
         cout << "\n";
      }
      string get_car_placa(){
         return placa;
      }
      string get_car_model(){
         return modelo;
      }
};


#endif