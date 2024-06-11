#include<iostream>
using namespace std;
 float pi=3.14;
void AreaOfCircle(int radius){
    float area= 3.14*(radius*radius);
    cout<<"Area is: "<<area<<endl;

}
int main(){
    AreaOfCircle(3);
    AreaOfCircle(5);
    return 0;
}