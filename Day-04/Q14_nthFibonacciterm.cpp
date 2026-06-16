#include<iostream>
using namespace std;
int main(){
    int n, a=0, b=1, c;

    cout<<"Enter n: ";
    cin>>n;

    if(n==1){
        cout<<a<<endl;
    }
    else if(n==2){
        cout<<b<<endl;
    }
    else{
        for(int i=3; i<=n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        cout<<b<<endl;
    }

    return 0;
}