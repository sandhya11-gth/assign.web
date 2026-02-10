#include<iostream>
using namespace std;
int main()
    {int x;// x=grade
    cin>>x;
    if((x>=90)&&(x<=100)){
        cout<<"A+"<<endl;

    }
else if((x>=80)&&(x<=89)){
    cout<<"A"<<endl;

}
else if((x>=70)&&(x<=79)){
    cout<<"B"<<endl;
}
else if((x>=60)&&(x<=69)){
    cout<<"C"<<endl;

}
else if((x>=50)&&(x<=59)){
    cout<<"D"<<endl;

}
else 
{cout<<"fail"<<endl;}
return 0;
}