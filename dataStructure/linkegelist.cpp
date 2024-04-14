#include<iostream>
#include<conio.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    node* head;
    cout<<"Enter the size of list"<<endl;
    int n; 
    cin>>n;
    int item;
    while(n>=0){
        cout<<"Enter the element:"<<endl;
        cin>>item;
        if(head==NULL){
            head = new node(item);
        }else{
            node *temp;
            temp=new node(item);
            temp->next=head;
            head=temp;
        }
        n--;
    }

    cout<<"Element of array:"<<endl;
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;

}