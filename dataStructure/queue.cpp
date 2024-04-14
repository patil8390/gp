#include<iostream>
#include<conio.h>
using namespace std;
int m;
class stack{
    private:
    int q[10],i,j,ele,f,r;
    public:
    stack(){
        f=r=0;
    }
     void push();
     void pop();
     void dis();
};
void stack::push(){
    if(r==m){
        cout<<"stack is overflow"<<endl;
    }else{
        cout<<"Enter the element:"<<endl;
        cin>>ele;
        f=1;
        r++;
        q[r]=ele;
    }

}
void stack::pop(){

    if(r==0){
        cout<<"stack underflow"<<endl;
    }else{
        int n;
         n=q[f];
        if(f==r){
            f=r=0;
        }else{
            f++;
        }

    }
   }

void stack::dis(){
    cout<<"element of stack is"<<endl;
    if(f==0){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"Element is:"<<endl;
        for(i=f;i<=r;i++){
            cout<<q[i]<<" ";
}
    }
    cout<<endl;
}
int main(){
    stack s;
    int ch;
    cout<<"Enter the size of stask"<<endl;
    cin>>m;
    cout<<"1.push 2.pop 3.dis 4.exit"<<endl;
    while(ch!=0){
        cout<<"Enter the choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1: s.push(); break;
            case 2: s.pop(); break;
            case 3: s.dis(); break;
            case 4: exit(0); break;
        }
    }

    }
