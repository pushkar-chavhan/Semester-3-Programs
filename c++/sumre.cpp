#include<iostream>
using namespace std;
int sum(int a[],int n){
for(int i=0;i<n;i++){
    sum+=a[i];
    return sum;
}
}
int main()
{
    int a[]={2,3,45,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"sum is:"<<sum<<endl;
    return 0;
}