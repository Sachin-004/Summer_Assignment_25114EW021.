#include<iostream>
using namespace std;
int main(){
    int num, largest = 1;

    cout<<"Enter a number: ";
    cin>>num;

    for(int i=2; i<=num; i++){
        while(num%i==0){
            largest = i;
            num = num/i;
        }
    }
    
    cout<<"Largest Prime Factor =  "<<largest<<endl;

    return 0;
}