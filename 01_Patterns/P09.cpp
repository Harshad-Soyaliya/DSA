/*

    *
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *
    
*/


#include<bits/stdc++.h>
using namespace std;

int main () {

    for(int i=0 ; i<10; i++){
        for(int j=0; j<10-i-1;j++){
            cout<<" ";
        }

        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }

        for(int j=0; j<10-i-1;j++){
            cout<<" ";
        }

        for(int j=0; j<=i;j++){
            cout<<" ";
        }

        for(int j=0; j<2*10 - (2*i + 1); j++){
            cout<<"*";
        }

        for(int j=0; j<=i;j++){
            cout<<" ";
        }

        cout<<"\n";
    }

   
    return 0;
}



