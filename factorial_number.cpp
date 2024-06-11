#include<iostream>
using namespace std;
int factorial(int num){
    int factorial=1;
    for(int i=2; i<=num; i++){
        factorial=factorial*i;
    }
    cout<<factorial;
    return factorial;
}
int main(){
    int num;
    cout<<"Enter the value of num: ";
    cin>>num;
    factorial(num);
    return 0;
}