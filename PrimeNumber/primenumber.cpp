#include<stdio.h>
#include<iostream>

using namespace std;

void checkForPrime(int x){

    int count = 0;  
    for(int i = 1 ; i * i <= x ; i++){
        if(x%i == 0 ){
            if(x/i != i){
                count++;
            }
        }
    }
    cout<<x<<" -> ";
    if(count>1){
        cout<< "false";
    }else{
        cout<<"true";
    }

}

int main(){
    int num = 51;

    checkForPrime(num);

}