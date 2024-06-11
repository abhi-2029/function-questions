#include<iostream>
using namespace std;
int sum=0;
void SumOfOddNumberUtoN(int num){
    for(int i=0; i<=num; i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
     cout<<"Final Sum Is: "<<sum<<endl;
}
int main(){
    SumOfOddNumberUtoN(10);
    SumOfOddNumberUtoN(20); 
    SumOfOddNumberUtoN(100);
}