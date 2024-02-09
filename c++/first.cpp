#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int result=fact(4);
    cout<<"factorial="<<result<<endl;
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++){
    fact=fact*i;
    }
    return fact;
}
