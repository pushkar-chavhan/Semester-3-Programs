#include<iostream>
using namespace std;
class sample
{
private:
    int x,y;
    int mean;
public:
    sample(int a,int b)
    {
        x=a;
        y=b;

    }
    void display()
    {
        cout<<" mean of x and y :"<<mean<<endl;
    }
    friend int mean(sample &obj);
};
int mean(sample &obj)
{
    obj.mean=(obj.x+obj.y)/2;
}
int main()
{
    sample s1(4,4);
    mean(s1);
    s1.display();
    return 0;
}
