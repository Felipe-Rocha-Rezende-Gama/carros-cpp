#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>

using namespace std;

void menu(){
   int choose;

   cout << "=========== MENU ===========";
   cout << "\nChoose";
   cout << "\n<1> Add car";
   cout << "\n<2> Remove car";
   cout << "\n<3> View list of allocated cars";
   cout << "\n<4> View list of occupied parking spaces";
   cout << "\n<5> View list of available parking spaces";
   cout << "\n-> ";
   cin >> choose;

   switch(choose){
      case 1:
         
      break;

      default:

      break;
   }

}

#endif