#include<iostream>
using namespace std;
void CheckEvenOdd(int num){
    if(num%2==0){
        cout<<"Even number "<<endl;
    }else{
        cout<<"Odd number "<<endl;
    }
    
}
int main(){
   CheckEvenOdd(8);
   CheckEvenOdd(13);
    CheckEvenOdd(40);
    return 0;
}