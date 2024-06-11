#include<iostream>
using namespace std;
void printMaximum(int n1, int n2, int n3){
    int ans1= max(n1, n2);
    int finalans=max(ans1,n3);
    cout<<"Final ans is: "<<finalans<<endl;
}
int main(){
    printMaximum(23,45,50);
    printMaximum(230,4500,500);
    return 0;
}