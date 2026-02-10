#include <iostream>
using namespace std;
int main()
{int rain, n;
cin>>n;
cin>>rain;// 1 when its not raining , 0 when its raining
if((rain==1)&&(n>=11)){
    cout<< "match is possible"<<endl;
    
}
else{
    cout<<"match is not possible"<<endl;
}
return 0;
}