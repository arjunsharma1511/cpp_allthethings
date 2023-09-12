#include <iostream>
using namespace std;

class Add{
    private:
        int num1, num2;
    public:
        void addition(int num1, int num2);
};

void Add::addition(int num1, int num2){
    cout << "Sum: " << num1 + num2 << endl;
}

int main(){
    Add obj;
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    obj.addition(a, b);
    return 0;
}
