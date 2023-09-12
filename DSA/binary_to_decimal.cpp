#include <iostream>
using namespace std;

int main(){
    int n, num, rem, dec = 0, base = 1;
    cout<<"Enter a binary number: ";
    cin>>n;
    num = n;
    while(n>0){
        rem = n%10;
        dec = dec + rem*base;
        base = base*2;
        n = n/10;
    }
    cout<<"The decimal equivalent of "<<num<<" is "<<dec<<endl;
    return 0;
}
