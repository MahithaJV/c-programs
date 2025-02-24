#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    //declaration
    complex operator -();
    void print(){
        cout<<"x:"<<a<<"y:"<<b<<endl;
    }
};
complex complex :: operator -(){
    return complex(-a,-b);
}
int main(){
    complex c1(2,3),c2(3,2);
    complex c3=-c1;
    c3.print();
       c2= -c2;
        c2.print();
}
