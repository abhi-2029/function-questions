#include<iostream>
using namespace std;
int NumberusingDigits(int n){
    int num=0;
    for(int i=0; i<n; i++){
        cout<<"Enter digits: "<<endl;
        int digit;
        cin>>digit;
        num=num*10+digit;
    }
    return num;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans=NumberusingDigits(n);
    cout<<"Number created by digit: "<<ans<<endl;
    return 0;
}


