#include<iostream>
using namespace std;
int armstrong(int num){
    int original = num;
    int sum = 0;
    while(num>0){
        int digit = num%10;
        sum = sum + (digit*digit*digit);
        num = num/10;
    }
    if(sum==original){
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
    if(armstrong(num)==1){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
    
    return 0;
}