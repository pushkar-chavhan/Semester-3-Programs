#include<iostream>
using namespace std;
class laptop
{
    int RAM;
    public:
    int USB;
    void getdata(int a)
    {
        RAM=a;
    }
    void display()
    {
        cout<<"RAM:"<<RAM<<endl;
        cout<<"USB:"<<USB<<endl;
    }
};
int main()
{
    laptop dell;
    laptop *pdell;
    pdell=&dell;
    (*pdell).USB=4;
    (*pdell).display();
    (*pdell).getdata(5);
}

