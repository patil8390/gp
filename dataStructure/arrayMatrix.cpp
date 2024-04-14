#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int a[5][5],b[5][5],c[5][5],d[5][5],e[5][5],f[5][5];
int p,q,i,j,k,n,m;

cout<<"\nEnter Number of row & column :\t";
cin>>n>>m;
cout<<"\nEnter the first Matrix:\n";
for(i=0;i<n;i++){
    for(j=0;i<m;j++){
        cin>>a[i][j];
    }
}
cout<<"matrix is :"<<endl;
for(i=0;i<n;i++){
    for(j=0;i<m;i++){
        cout<<a[i][j];
    }
}
return 0;
}