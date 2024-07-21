//Program to calculate rupee notes required for input amount
#include<iostream>
using namespace std;
int main(){
    int n,a,count;
    cout<<"enter amount : ";
    cin>>a;

    if(a>100)
    {
    int count=a/100;
    cout<<"100 rs notes - "<<count<<endl;
    a=a-count*100;
    }

    if (a>=50)
    {
    int count=a/50;
    cout<<"50 rs notes - "<<count<<endl;
    a=a-count*50;   
    }

    if (a>=20)
    {
    int count=a/20;
    cout<<"20 rs notes - "<<count<<endl;
    a=a-count*20;
    }

    if(a>=10)
    {
    int count=a/10;
    cout<<"10 rs notes - "<<count<<endl;
    a=a-count*10;
    }

    if(a>=1)
    {
    int count=a/1;
    cout<<"1 rs notes - "<<count<<endl;
    a=a-count*1;
    }

    

    
}





