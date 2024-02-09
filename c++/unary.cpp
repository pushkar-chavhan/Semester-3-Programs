#include<iostream>
using namespace std;
class weight{
    int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int x)
    {
        kg=x;
    }
    void print()
    {
        cout<<"weight in kg:"<<kg<<endl;

    }
    void operator++()
    {
        ++kg;
    }
    void operator++(int x){
        kg++;
    }


};
int main()
{
    weight w;
    w.print();
    ++w;
    w.print();
    w++;
    w.print();
    return 0;
}
