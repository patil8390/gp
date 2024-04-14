#include<iostream>
#include<conio.h>
using namespace std;
class demo{
    private:
    int a[10],i,j,k,n,ele;
    public:
        void get();
        void insert();
        void del();
        void dis();
};
void demo::get(){
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the element:"<<endl;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
}
void demo::insert(){
    cout<<"Enter the position"<<endl;
    cin>>k;
    cout<<"Enter the element:"<<endl;
    cin>>ele;
    j=n;
    while(j>=k){
        a[j+1]=a[j];
        j--;
    }
    n++;
    a[k]=ele;


}
void demo::del(){
    cout<<"Enter the position:"<<endl;
    cin>>k;
    j=k;
    while(j<=n-1){
        a[j]=a[j+1];
        j++;
    }
    n--;
}
void demo::dis(){
    cout<<"Element of array is:"<<endl;
    for(i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    demo d;
    d.get();
    cout<<"1.insert 2.del 3.dis 4.exit"<<endl;
    int ch;
    while(ch!=4){
        cout<<"Enter the choice"<<endl;
        cin>>ch;
        switch(ch){
            case 1: d.insert(); break;
            case 2: d.del(); break;
            case 3: d.dis(); break;
    
        }
    }
}