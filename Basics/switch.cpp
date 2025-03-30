#include <bits/stdc++.h>
using namespace std;
/*
Take the day no and print the corresponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/

int main(){

    int day;
    cout << "Enter the number" << endl;
    cin >> day;

    switch(day){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday"<< endl;
            break;
        case 3:
            cout << "Wedenesday"<< endl;
            break;
        case 4:
            cout << "Thursday"<< endl;
            break;
        case 5:
            cout << "Friday"<< endl;    
            break;
        case 6:
            cout << "Saturday"<< endl;
            break;
        case 7:
            cout << "Sunday"<< endl;
            break;
        default:
            cout << "Invalid" << endl;
        

    }



    return 0;
}