#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string filename = "text.txt";
    ofstream fout(filename);
    if(!fout){
        cerr<<"failed to open "<<endl;
        abort();
    } 
    fout<<"sggs it 1"<<endl;
    fout<<"sggs it 2"<<endl;
    fout.close();
    ifstream fin(filename);
    if(!fin){
        cerr<<"failed to open file"<<endl;
        abort();
    }
    char ch;
    while(fin.get(ch)){
        cout<<ch;

    }
    fin.close();
    return 0;

}