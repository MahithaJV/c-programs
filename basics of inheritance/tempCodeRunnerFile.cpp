# include<iostream>
using namespace std;
class base{
    public:
    int b;
     void setdata(int b){
        this->b=b;
    }
    void show(){
        cout<<"base is called"<<endl;
        cout<<"b is:"<<b<<endl;
    }
};
class derived: public base{
    public:
    int d;
    void setdata(int d){
        this->d=d;
    }
    void show(){
        cout<<"child is called"<<endl;
        cout<<"d is:"<<d<<endl;
    }

};
int main(){
    base b;
    b.setdata(2);
    b.show();//2 base
    derived d;
    d.setdata(2);
    d.show();//2 child
    base *b1= new derived;
    ((derived *)b1)->setdata(3);//base 3
    b1->show();

}