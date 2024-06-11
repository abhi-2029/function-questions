#include<iostream>
using namespace std;
void PrintNaturalNumber(int num){
    for(int i=1; i<=num; i++){
        cout<<i<<endl;
    }
}
int main(){
    PrintNaturalNumber(10);
    return 0;
}