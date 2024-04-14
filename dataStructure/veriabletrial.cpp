#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"element"<<endl;
    int arr[]={1,2,3,4,5};
int j;
int k;
cout<<"Enter the position"<<endl;
cin>>k;
int ele;
cout<<"Enter the element";
cin>>ele;
    j=n;
    while(j<=k){
        cout<<"Array of j values is:"<<arr[j]<<endl;

        arr[j]=arr[j+1];
        //arr[]={10,20,30,40,50}
         //arr[5]=arr[6]  :5- is shifting to right;
         //arr[]={10,20,30,40, ,50}
         //arr[4]=arr[5] :
         //arr[]={10,20,30, ,40,50}
        n++;
        }
        arr[k]=ele;
        n--;



//arr[]={10,20,30,40,50}
//arr[2]=arr[3];
//arr[]={10,20,  ,30,40,50}
    return 0;
}