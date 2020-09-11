//
//  main.cpp
//  randomGame
//
//  Created by Ome Asraf on 9/11/20.
//  Copyright © 2020 Ome Asraf. All rights reserved.
//

#include "Header.h"

int main(int argc, const char * argv[]) {
    
      
      
   srand(time(0));
    
   int guessed = 1 + (rand() % 100);
   

   bool didGuess = false;
    
   while (didGuess == false) {
       cout << "Enter a number: ";
       int input;
       cin >> input;
       
      if (input > guessed){
           cout << "Your number is greater than the guessed number" << endl;
       }
       else if (input < guessed){
           cout << "Your number is less than the guessed number" << endl;
       }
       else{
           didGuess = true;
           cout << "Congrats you've successfully guessed the number" << endl;
       }
   }
   
}
