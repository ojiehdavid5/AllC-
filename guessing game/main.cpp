#include <iostream>

using namespace std;

int main(){

    int secretNum=25;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    bool outOfGuess=false;

    while(secretNum != guess && !outOfGuess){

            if(guessCount<guessLimit ){
        cout<<"Enter guess:";
        cin>>guess;
        guessCount++;
            } else {
            outOfGuess=true;
            }


    }

    if(outOfGuess){

        cout<<"YOU LOSS";
    }else{
            cout<<"YOU WIN";

    }



    return 0;

}


