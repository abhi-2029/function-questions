#include<iostream>
using namespace std;
void checkNumber(int &num1, int &num2){
    if(num1<num2){
        num1=0;
    }
    else{ &
        num2=0;
    }
}
int main(){
    int x, y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    checkNumber(x, y);
    cout<<"First number: "<<x<<endl;
    cout<<"Second number: "<<y<<endl;
    return 0;
}