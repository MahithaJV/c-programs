#include<iostream>
using namespace std;
class distance{
    int feet;
    int inches;
    public:
    distance(){
        feet=0;
        inches=0;
    }
    distance(int x,int y){
        feet=x;
        inches=y;
    }
    void operator=(distance &t);
    void print(){
        cout<<"feet:"<<feet<<"inches:"<<inches<<endl;
    }
};
void distance ::operator =(distance &t){
    feet=t.feet;
    inches=t.inches;
}
int main(){
    distance d1(2,3),d2(3,2);
    d1.print();
    d2.print();
    d2=d1;
    d2.print();



}