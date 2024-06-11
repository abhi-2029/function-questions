#include<iostream>
using namespace std;
void Fibonacci(int num){
    int num1=0;
    int num2=1;
    int nextTerm;
    for(int i=1; i<num; i++){
        cout<<num1<<endl;
        nextTerm=num1+num2;
        num1=num2;
        num2=nextTerm;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    Fibonacci(n);
    return 0;
}