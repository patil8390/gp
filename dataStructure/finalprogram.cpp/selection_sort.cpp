#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Selection sort<<endl"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"sorted arry is here:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}