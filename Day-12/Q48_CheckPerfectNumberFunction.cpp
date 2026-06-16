#include<iostream>
using namespace std;
int perfect(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num%i == 0){
            sum = sum+i;
        }
    }
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(perfect(num)==1){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a Perfect Number";
    }

    return 0;
}