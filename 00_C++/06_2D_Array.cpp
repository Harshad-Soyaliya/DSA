#include<bits/stdc++.h>
using namespace std;

int main () {

    int array[2][3];
    
    array[0][0] = 0;
    array[0][1] = 1;
    array[0][2] = 2;

    array[1][0] = 0;
    array[1][1] = 1;
    array[1][2] = 2;

    
    for (int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            cout << array[i][j] <<" ";

        }

        cout <<"\n";
    }

    return 0;
    
    
}