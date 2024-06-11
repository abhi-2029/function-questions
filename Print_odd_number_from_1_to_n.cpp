#include<iostream>
using namespace std;
void PrintOdd(int num){
    for(int i=0; i<=num; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
int main(){
    PrintOdd(10);
    PrintOdd(100);
    return 0;
}