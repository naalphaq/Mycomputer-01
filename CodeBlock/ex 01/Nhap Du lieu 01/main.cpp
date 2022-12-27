#include <iostream>
#include <string>
using namespace std;
void input(string ds_suaongnuoc[], int &m){
    string hoten;
    cout<<"Nhap vao so phan tu: ";
    cin>>m;
    for(int i=0; i<m; i++){
    fflush(stdin);
    getline(cin, ds_suaongnuoc[i]);
    }
}
void output(string ds_suaongnuoc[], int m){
    for(int i=0; i<m; i++){
    cout<<"\n"<<ds_suaongnuoc[i];
    }
}
int main()
{
    int m =0;
    string ds_suaongnuoc [100];
    input(ds_suaongnuoc, m);
    output(ds_suaongnuoc, m);
    system("pause");
    return 0;
}
