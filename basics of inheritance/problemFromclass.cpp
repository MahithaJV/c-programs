# include<iostream>
# include<string>
using namespace std;
class vechile{
    protected:
    string brand;
    string model;
    int year;
    public:
    vechile(){
        brand="";
        model="";
        year=0;
        cout<<"default constructor is called"<<endl;
    }
    vechile(string a,string b,int c){
        brand=a;
        model=b;
        year=c;
        cout<<"parameterised constructor is called"<<endl;
    }
    void dispayvechile(){
        cout<<"brand"<<brand<<endl;
        cout<<"model0"<<model<<endl;
        cout<<"year"<<year<<endl;
        

    }
};
//derived class protected
class car: public vechile{
int nodoors;
public:
car(string a,string b,int c,int d){
    brand=a;
    model=b;
    year=c;
    nodoors=d;
}
void displayCar(){
    cout<<"brand"<<brand<<endl;
        cout<<"model0"<<model<<endl;
        cout<<"year"<<year<<endl;
        cout<<"nodoors"<<nodoors<<endl;
}
};
//protected child
class bike:public vechile{
bool hasbasket;
public:
bike(string a,string b,int c,bool e){
    brand=a;
    model=b;
    year=c;
    hasbasket=e;
}
    void displaybike(){
        cout<<"brand"<<brand<<endl;
        cout<<"model0"<<model<<endl;
        cout<<"year"<<year<<endl;
        cout<<"hasbasket"<<hasbasket<<endl;
    }


};
int main(){
    car c1("bmw","yuu",2000,6);
    c1.displayCar();
    bike b1("hero honda","nou",2000,true);
    b1.displaybike();
    return 0;

}