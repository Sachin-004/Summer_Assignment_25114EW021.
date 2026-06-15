#include<iostream>
using namespace std;
int maximum(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}
int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Maximum number = "<<maximum(num1, num2);

    return 0;
}