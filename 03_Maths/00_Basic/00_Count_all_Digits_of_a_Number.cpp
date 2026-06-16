#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    int count = 0;

    cout <<"enter numbers"<<endl;
    cin >> n;

    while(n > 0){

        n = n / 10;
        count = count + 1;
    }

    cout <<"total number of digits is : "<<count;

    return 0;
}