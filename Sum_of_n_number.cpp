#include<iostream>
using namespace std;
void SumOfNnumber(int num){
    int sum=0;
    for(int i=0; i<=num;i++){
        sum+=i;
    }
    cout<<"Final Sum Is: "<<sum<<endl;
}
int main(){
    SumOfNnumber(10);
    SumOfNnumber(100);
    SumOfNnumber(1000);
    SumOfNnumber(10000);
    return 0;
}