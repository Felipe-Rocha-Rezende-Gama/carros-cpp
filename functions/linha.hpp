#ifndef LINHA_HPP
#define LINHA_HPP

#include <iostream>

#include "addcar.hpp"

using namespace std;

void linha(char a, int x){
   for(int i = 1; i <= x; i++){
      cout << a;
   }
}

#endif