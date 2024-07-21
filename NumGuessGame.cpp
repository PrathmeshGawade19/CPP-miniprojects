//Number Guess game using random number generator concept
#include<iostream>
#include<ctime>
using std::cout;
using std::cin;

int main(){
    int randnum,tries=0,guess;

    srand(time(0));
    randnum=(rand()%100)+1;

    while(randnum!=guess){
        cout<<"enter the number to guess :";
        cin>>guess;
        tries++;

        if(guess>randnum){
            cout<<"too high!\n";
        }
        else if(guess<randnum){
            cout<<"too low!\n";
        }
        else{
            cout<<"congrats you guessed the number!!! #"<<tries<<" tries you took\n";
        }
    }

    return 0;
}