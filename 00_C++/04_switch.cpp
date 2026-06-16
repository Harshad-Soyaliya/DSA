#include<bits/stdc++.h>
using namespace std;

int main () {

    int number ;

    cout <<"enter number "<<endl;
    cin >> number;

    switch (number)
    {

    // case 1 : if integer , case 'a' : if character

    case 1 :
        cout <<"Mondey" <<endl;
        break;

    case 2 :
        cout <<"Tuesday" <<endl;
        break;
    
    case 3 :
        cout <<"Wednesday" <<endl;
        break;

    case 4 :
        cout <<"Thursday" <<endl;
        break;

    case 5 :
        cout <<"Friday" <<endl;
        break;

    case 6 :
        cout <<"Saturday" <<endl;
        break;

    case 7 :
        cout <<"Sunday" <<endl;
        break;
    
    default:
        cout << "invalid input please charck number it should be beetween 1-7 ";
        break;
    }

    return 0;
}