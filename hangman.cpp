/**
 * This is a program for  a simple hangamn game
 * @author: Farida Eleshin
 * @version:1.0.1
 */
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;



int main(){
    string array[10];
    array[0] = "apple";
    array[1] = "cider";
    array[2] = "boxer";
    array[3] = "coach";
    array[4] = "agent";
    array[5] = "above";
    array[6] = "alive";
    array[7] = "could";
    array[9] = "focus";

    int numofguesses = 0; //initializes the number of times you canguess a letter




    string  randomword = array[rand()%10]; //generates a random word in an array with an index less than 10

    cout<<"Welcome to Hangman:"<<endl;
    cout<<"*******************************"<<endl;
    int max_guesses = 10; //maximum number of guesses you can play
    string space= "_ _ _ _ _";

     while ( max_guesses > 0 && max_guesses < 11){ //while the maximum guesses is between 1 and 11
       cout<< space<<" | Attempts left: "<< max_guesses<<"\nYour choice: "<<endl;
       char letter;
       cin>>letter;  // takes a character as an input
       letter = tolower(letter);
       cout<<"*******************************"<<endl;
      for(int m=0; m< randomword.size(); m++){
                  if(randomword.at(m)==letter){ //iterate through the randomword

                      for(int n=m; n< randomword.size(); n++){
                          if(randomword.at(n)==letter){

                            space.at(n)=letter;
                            numofguesses++; // increase the number of correct tries
                          }

                      }
          }

       }
        max_guesses--;



     }

     if(numofguesses<5){   //if you fail to input all the correct answers
       cout<< "You lose...Better luck next time"<<endl;  //you lose
       cout<<"The word is: "<<randomword;
   }else {
   cout<<space<<endl;
   cout<<"********************************\n"<<"********************************\n"<<"You win!"<<endl;
   }




return 0;
}




