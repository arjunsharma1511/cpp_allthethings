#include <iostream>
using namespace std;

int main(){
    int num1,num2,i;
    cout<<"Enter two numbers to check: ";
    cin>>num1>>num2;

    int sum1 = 0, sum2 = 0;

    for(i=1;i<=num1/2;i++){
        if(num1%i==0){
            sum1 += i;
        }
    }
    for(i=1;i<=num2/2;i++){
        if(num2%i==0){
            sum2 += i;
        }
    }

    if(sum1==num2 && sum2==num1){
        cout<<"The numbers are amicable"<<endl;
    }
    else{
        cout<<"The numbers are not amicable"<<endl;
    }
    return 0;
}
