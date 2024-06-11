// #include<iostream>
// using namespace std;
// bool prime(int num){
//     for(int i=2; i<num; i++){
//         if(num%i==0){
//             return false;
//         }
//     }  
//     return true;
// }
// int main(){
//     int num;
//     cout<<"Enter the value of num: ";
//     cin>>num;
//     for(int i=2; i<=num; i++){
//         bool Isiprime=prime(i);
//         if(Isiprime){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=2; i<=n; i++){
        bool Isprime=true;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                Isprime=false;
                break;
            }
        }
        if(Isprime){
            cout<<i<<" ";
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    prime(n);
    return 0;
}
