#include<bits/stdc++.h>
using namespace std;



void hello(){
    cout<<endl<<endl<<"this is without paraeterized function :"<<endl<<endl<<"hello harshad!!"<<endl;
}

void sum(int num1 , int num2){
    cout <<endl<<endl<<"sum of this value is (using void function) = "<<num1 + num2;

}

int subtraction(int num1 , int num2){
    return num1 - num2;
}

void dosomething(int number){
    cout<<endl<<"inside function :"<<endl<<endl<<"number value is : "<<number<<endl<<endl;
    number += 12;
    cout<<"number value is : "<<number<<endl<<endl;
    number += 21;
    cout<<"number value is : "<<number<<endl<<endl;
    number *= 212;
    cout<<"number value is : "<<number<<endl<<endl;

}

void dosomethingoringnal(int &number){
    cout<<endl<<"inside function :"<<endl<<endl<<"number value is : "<<number<<endl<<endl;
    number += 12;
    cout<<"number value is : "<<number<<endl<<endl;
    number += 21;
    cout<<"number value is : "<<number<<endl<<endl;
    number *= 212;
    cout<<"number value is : "<<number<<endl<<endl;

}
int main () {


    hello();
    int num1 , num2 ;

    cout <<"enter number 1 and number 2 : "<<endl;
    cin >>num1>>num2;

    sum(num1 , num2);
    cout<<endl;

    int subres = subtraction(num1 , num2);
    cout <<endl<<endl<<"after subtraction value is (using retun function) = "<<subres;

    cout<<endl<<endl<<"so we perform call by value :"<<endl<<endl;
    int number;
    cout<<"enter number : ";
    cin>>number;

    cout<<endl<<"--------------------"<<endl<<"call by value :-"<<endl<<"--------------------"<<endl;

    dosomething(number);
    cout<<endl<<"number value is (in int main function) : "<<number<<endl<<endl;

    cout<<endl<<"--------------------"<<endl<<"call by reference :-"<<endl<<"--------------------"<<endl;

    dosomethingoringnal(number);
    cout<<endl<<"number value is (in int main function) : "<<number<<endl<<endl;

    return 0;
}