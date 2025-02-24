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
    //complex operator ++();
    void operator ++();
    void print(){
        cout<<"x:"<<a<<"y:"<<b<<endl;
    }
};
//complex complex :: operator ++(){
    //return complex(++a,++b);
//}
void complex ::operator++(){
    a=++a;
    b=++b;
}
int main(){
    complex c1(2,3),c2(3,2);
     ++c1;
    c1.print();
     ++c2;
        c2.print();
}
