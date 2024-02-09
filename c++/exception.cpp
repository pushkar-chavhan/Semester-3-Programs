#include<iostream>
using namespace std;
int main()
{
    int divisor,divident;
    float q;
    cout<<"enter divident"<<endl;
    cin>>divident;
cout<<"enter divisor:"<<endl;
cin>>divisor;
try{
    if(divisor!=0)
    {
        q=divident/divisor;
        cout<<"outcome:"<<q<<endl;
    }else{
        throw(divisor);
    }
}
catch(exception){
    cout<<"division by zero exception25
    "<<endl;
}
}