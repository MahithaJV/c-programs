# include<iostream>
using namespace std;
class test{
    int x;
    public:
    test(){
        x=0;
    }
    test(int a){
        x=a;
        
    }
   friend istream & operator >>(istream &input,test &t);
    
   friend ostream & operator <<(ostream &output,test t);
};
 istream & operator >>(istream &input,test &t){
    input>>t.x;
}
 ostream & operator <<(ostream &output,test t){
    output<<t.x;
}

int main(){
    test t;
    cin>>t;
    cout<<t;
}