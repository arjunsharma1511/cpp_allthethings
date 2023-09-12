#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[]="arjun";
    for(int i=0;i<strlen(name);i++){
        if(name[i]>='a' && name[i]<='z'){
            name[i]=name[i]-32;
        }
    cout<<name[i];
    }
    return 0;
}

