#include<iostream>
#include<conio.h>
using namespace std;


void LinearSearch(int key, int arr[], int n){

    for(int i=0;i<=n;i++){
        if(arr[i]==key){
            cout<<"Element is succesfully find and"<<key<<endl;
            cout<<"Position of element is:"<<i;
            break;
            
        }
        
    }

}

int main(){
 
 int n;
 cout<<"Enter the size of array"<<endl;
 cin>>n;

 int arr[n];
 cout<<"Enter the element of Array"<<endl;
 for(int i=1;i<=n;i++){
    cin>>arr[i];
 }

int key;
cout<<"Enter the key"<<endl;
cin>>key;

LinearSearch(key,arr,n);
    return 0;
}