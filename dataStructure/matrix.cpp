#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     int a[10][20],b[10][10],i,j,m,n,sum[10][10];
cout<<"Enter the size of array:"<<endl;
cin>>n>>m;
cout<<"Enter the element of array"<<endl;
for(i=0;i<n;i++){

    for(j=0;j<m;j++){
        cin>>a[i][j];
        }
}


cout<<"secound matric:"<<endl;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>b[i][j];}
}

cout<<"sum of two array is"<<endl;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        sum[i][j]=a[i][j] + b[i][j];
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
}


cout<<"Element of array is:"<<endl;
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
}

}