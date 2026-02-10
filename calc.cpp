#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout <<"enter operation (=,-,*,/)"<<endl;
    cin>>op;
    if(op=='+')
    cout<<"addition is"<<a+b;
    else if(op=='-')
    cout<<"subtraction is"<< a-b;
    else if(op=='*')
    cout<<"multiplication is"<<a*b;
    else if(op=='/')
    cout<<"division is"<<a/b;
    else{
        cout<<"invalid";
    }


return 0;}