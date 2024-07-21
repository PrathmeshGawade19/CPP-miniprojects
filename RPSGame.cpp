#include<iostream>
#include<ctime>
using namespace std;

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player,char computer);

int main(){
    char player,computer;

    player=getuserchoice();
    cout<<"your choice :";
    showchoice(player);

    computer=getcomputerchoice();
    cout<<"computer choice :";
    showchoice(computer);

    choosewinner(player,computer);

    return 0;
}


char getuserchoice(){
    char player;
    cout<<"rock-paper-scissors game!!\n";

    do{
        cout<<"choose one of the following\n";
        cout<<"****************************\n";
        cout<<"'r' for rock\n";
        cout<<"'p' for paper\n";
        cout<<"'s' for scissors\n";
        cin>>player;
    }while(player!='r' && player!='p' && player!='s');
    return player;
}
char getcomputerchoice(){
    srand(time(0));
    int randnum=(rand()%3)+1;
    switch(randnum){
        case 1:return 'r';
        case 2:return 'p';
        case 3:return 's';

    }
}
void showchoice(char choice){
    switch(choice){
        case 'r':cout<<"Rock\n";
                break;
        case 'p':cout<<"Paper\n";
                break;
        case 's':cout<<"Scissors\n";
                break;
    }
}
void choosewinner(char player,char computer){
    switch(player){
        case 'r':if(computer=='r'){
                cout<<"it's a tie\n";
                }
                else if(computer=='p'){
                    cout<<"you lose\n";
                }
                else{
                    cout<<"you win\n";
                }
                break;
        case 'p':if(computer=='p'){
                cout<<"it's a tie\n";
                }
                else if(computer=='s'){
                    cout<<"you lose\n";
                }
                else{
                    cout<<"you win\n";
                }
                break;
        case 's':if(computer=='s'){
                cout<<"it's a tie\n";
                }
                else if(computer=='r'){
                    cout<<"you lose\n";
                }
                else{
                    cout<<"you win\n";
                }
                break;

    }
}