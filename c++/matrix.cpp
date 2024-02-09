#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int m2[3][3] = {{9, 4, 8}, {1, 4, 3}, {9, 1, 3}};
int result[3][3];
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        result[i][j]=m1[i][j]+m2[i][j];
    }
}
cout<<"matrix 1"<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<m1[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"matrix 2"<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<m2[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"sum::"<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}