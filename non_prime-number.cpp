#include<iostream>
using namespace std;
bool checkNoPrime(int n){
    for(int i=2; i<n; i++){
        bool Isprime=true;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                Isprime=false;
                break;
            }
        }
        if(!Isprime){
            cout<<i<<" ";
        }
    }
    return true;
}
int main(){
    int n;
     cout<<"Enter the value of n: ";
    cin>>n;
    checkNoPrime(n);
    return 0;
}