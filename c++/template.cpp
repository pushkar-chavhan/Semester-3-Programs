#include<iostream>
using namespace std;
// template <typename T> T myMax(Tx, T y)
// {
//     return (x > y) ? x : y;
// }
 
// int main()
// {
//     // Call myMax for int
//     cout << myMax<int>(3, 7) << endl;
//     // call myMax for double
//     cout << myMax<double>(3.0, 7.0) << endl;
//     // call myMax for char
//     cout << myMax<char>('g', 'e') << endl;
 
//     return 0;
// }
template <typename T> T max(T a, T b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    cout<< max <int>(3,5)<<endl;
    cout<<max<double>(4.5,6.7)<<endl;
    return 0;
    

}