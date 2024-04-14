#include<iostream>
#include<conio.h>
using namespace std;

int BinarySearch(int n, int arr[], int key){
    int s=0;
    int e=n;
    while(s<e){
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
    n=5;

    int arr[n]={12,42,50,64,74,100};

    cout<<"Enter the key:"<<endl;
    int key;
    cin>>key;

    cout<<BinarySearch(n,arr,key)<<endl;
}

