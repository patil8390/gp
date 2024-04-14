#include<iostream>

using namespace std;

 int BinarySearch(int n,int arr[],int key){
    
    int s=0;
    int e=n;
    while(s<=e){
        
       int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            e=mid+1;
        }
    }
  return -1;  
 }

int main(){
 int n;
 cout<<"Enter the size of array:"<<endl;
 cin>>n;


int arr[n];
 cout<<"Enter the Element of array:"<<endl;
 for(int i=1;i<=n;i++){
    cin>>arr[i];

 }

 int key;
 cout<<"Enter the key"<<endl;
 cin>>key;

 cout<<BinarySearch(n,arr,key)<<endl;
 return 0;
}
