#include<iostream>
using namespace std;
int prime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cout<<"Enter anumber: ";
    cin>>num;
    if(prime(num) == 1){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }

    return 0;
}