#include <iostream>
using namespace std;

int main() {
    int d, m, y;
    cout << "Enter today's date (day month year): ";
    cin >> d >> m >> y;

    if(d < 1 || d > 31 || m < 1 || m > 12 || y < 0){
        cout << "Invalid input" << endl; //if date is negative or greater than 31, invalid
        return 1;
    }

    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10:
            if(d == 31){
                d = 1;
                m++;
            }
            else{
                d++;
            }
            break;
    
        case 2:
            if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){ //if leap year
                if(d == 29){
                    d = 1;
                    m++;
                }
                else{
                    d++;
                }
            }
            else{
                if(d == 28){
                    d = 1;
                    m++;
                }
                else{
                    d++;
                }
            }
            break;
        case 4: case 6: case 9: case 11:
            if(d == 30){
                d = 1;
                m++;
            }
            else{
                d++;
            }
            break;
        case 12:
            if(d == 31){
                d = 1;
                m = 1;
                y++;
            }
            else {
                d++;
            }
            break;

    }

    cout<< "Tomorrow's date is: " << d << " " << m << " " << y << endl;

    return 0;
}
