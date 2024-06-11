#include<iostream>
using namespace std;
int sum=0;
void SumOfEvenNumberUtoN(int num){
    for(int i=0; i<=num; i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
     cout<<"Final Sum Is: "<<sum<<endl;
}
int main(){
    SumOfEvenNumberUtoN(10);
    SumOfEvenNumberUtoN(20); 
    SumOfEvenNumberUtoN(100);
}