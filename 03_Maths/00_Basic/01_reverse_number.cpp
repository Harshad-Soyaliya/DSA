#include<bits/stdc++.h>
using namespace std;

int main() {


    int n ;
    int reversnumber = 0;

    cout <<"enter number : "<<endl;
    cin >> n;

    while (n > 0)
    {
        
        int lastdigit = n % 10;
        reversnumber = (reversnumber*10) + lastdigit;
        n = n / 10;
    }

    cout <<"your reverse number is : "<< reversnumber <<endl;
    
    
    return 0;
}


/*

leet code :


class Solution {
public:
    int reverse(int x) {
        int reversenumber = 0;

        while(x != 0){
            int lastdigit = x % 10;
            if (reversenumber > INT_MAX / 10) return 0;
            if (reversenumber < INT_MIN / 10) return 0;
            reversenumber = (reversenumber*10)+lastdigit;
            x = x / 10;
        }

        return reversenumber;
    }
};


*/