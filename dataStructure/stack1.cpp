#include<iostream>
#include<conio.h>
using namespace std;

class stack{
    private:
        int s[10],i,top,ele,n;

    public:
        stack(){
            top=-1;
        }
        void push();
        void pop();
        void dis();

};
void stack::push(){
    if(top>=n){
        cout<<"Stack is overflow"<<endl;
    }
    else{
        cout<<"Enter the element"<<endl;
        top++;
        s[top]=ele;
    }
}
int stack::pop(){
    if(top==-1){
        cout<<"stack is underflow"<<endl;

    }else{
        top--;
        return top;
    }
}
void stack::dis(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }else{
        for(i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
    }
}
int main(){
    stack s;
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int ch;
    while(ch!=4){
        cout<<"Enter the choice"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:s.push();
            break;
        case 2:s.pop();
            break;
        case 3:s.dis();
            break;
        case 4:exit(0);
            break;
        }
    }


    return 0;

}