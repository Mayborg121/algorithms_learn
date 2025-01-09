#include<stdio.h>
#include<iostream>
using namespace std;


void linearSearch(int a[],int b){
    int temp = -1;

    for(int i=0; i<7; i++){
        if(a[i] == b){
            cout<<"\nYour Element found at "<<i+1<<"th position\n";
            temp = 0;
        }
    }

    if(temp == -1){

        cout<<"\n*Element Not in Array*\n\n";
    }
}


int main(){

    int a[]={1,25,36,49,51,75,68};
    int b;
    cout<<"Enter Search Element : ";
    cin>>b;

    linearSearch(a,b);





    return 0;
}