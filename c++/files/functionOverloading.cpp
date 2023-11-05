#include <iostream>
using namespace std;

 double product(int a , int b){
    return a * b;
 }

 double product(int x,int y, int z){
    return x*y*z;
 }

int main(){
    cout << product(4,4,5); cout << endl ;
    cout << product(4,4,4) ;
    return 0;
}