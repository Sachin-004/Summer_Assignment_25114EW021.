#include<iostream>
using namespace std;
int palindrome(int num){
    int original = num;
    int reverse = 0;
    while(num>0){
        int digit = num%10;
        reverse = reverse*10+digit;
        num = num/10;
    }
    if(original==reverse){
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
    if(palindrome(num)==1){
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Not a Palindrome Number";
    }
    return 0;
}