#include <iostream>

using namespace std;

int main(){

    int secretNum=25;
    int guess;
    int guessCount;
    //bool outOfGuess=false;

    for( guessCount=0; guessCount < 6; guessCount++){
                        cout<<"enter number:";
                cin>>guess;


        if(secretNum>guess){
            cout<<"the number guessed is lesser try again"<<endl;


        } else if(secretNum < guess){
            cout<<"the number guessed is greater try again"<<endl;

        }else{
            cout<<"You win, PUT YOUR ACCOUNT NO";
            break;

        }


//if(outOfGuess){

        //cout<<"YOU LOSS";
    //}else{
            //cout<<"YOU WIN";


}
return 0;

}
