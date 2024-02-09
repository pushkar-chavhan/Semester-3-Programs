#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<"sum="<<a+b<<endl;
}
void sub(int a, int b){
    cout<<"diff="<<a-b<<endl;
}
int main()
{
    void (*p1)(int, int)=add;
    void(*p2)(int,int)=sub;
    p1(3,4);
    p2(4,2);
    return 0;
}