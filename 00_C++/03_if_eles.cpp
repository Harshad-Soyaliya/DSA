#include<bits/stdc++.h>

using namespace std;

int main (){

    int  subject1 , subject2 , subject3 , subject4 , subject5 ;

    cout << "this is student marksheet result based on subject makrs" <<endl<<endl<<endl;
    cout <<"enter subject 1 mark : " <<endl;
    cin >> subject1 ;
    cout <<"enter subject 2 mark : " <<endl;
    cin >> subject2 ;
    cout <<"enter subject 3 mark : " <<endl;
    cin >> subject3 ;
    cout <<"enter subject 4 mark : " <<endl;
    cin >> subject4 ;
    cout <<"enter subject 5 mark : " <<endl;
    cin >> subject5 ;

    int Total = subject1 + subject2 + subject3 + subject4 + subject5 ;


    cout << "--------------------"<<endl;
    cout << "Total Marks is : " << Total <<endl;
    cout << "--------------------" <<endl<<endl;

    if (Total >= 451 && Total <= 500 ) {
        cout << "your Grade is : A " <<endl;
    }
    else if (Total >= 400 && Total <= 450 ) {
        cout << "your Grade is : B " <<endl;
    }
    else if (Total >= 300 && Total <= 399 ) {
        cout << "your Grade is : C " <<endl;
    }
    else if (Total >= 200 && Total <= 299 ) {
        cout << "your Grade is : D " <<endl;
    }
    else if (Total >= 100 && Total <= 199 ) {
        cout << "your Grade is : E " <<endl;
    }
    else if (Total <= 50) {
        cout << "your Grade is : F " <<endl;
    }

    return 0;
}