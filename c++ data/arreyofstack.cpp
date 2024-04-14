#include<iostream>
#include<conio.h>
using namespace std;
int n;
class stack{
    private:
    int s[10],ele,top,i;
    public:
    stack(){
        top=-1;
    }
    void push(){
     if(top==-1){
        cout<<"stack is overflow"<<endl;

     }else{
            cout<<"Enter the elemets";
            cin>>ele;
            top++;
            s[top]=ele;
     }

    }
    void dis(){
        cout<<"Element of stack is:"<<endl;
        for(i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
    }

};
int main(){
    stack s;
    cout<<"1.push 2.dis"<<endl;
    cout<<"Enter your input"<<endl;
    int ch;
    cin>>ch;
    if(ch==1){
        s.push();

    }
    else if(ch==2){
        s.dis();

    }else{
        cout<<"Give the proper input"<<endl;
    }
}
