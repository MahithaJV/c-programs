# include<iostream>
# include<string>
using namespace std;
int main(){
    string a;
    cout<<"enter string\n";
    getline(cin,a);
    cout<<a;
int i,c=0;
for(i=0;a[i]!='\0';i++)
    c++;
    cout<<"length is"<<c<<endl;
    i=c;
    if(i>=0){
        while(a[i]!=' '){
            int c1=0;
            while(a[i]!=' '){
                c1++;
            }
            cout<<a[i-c1];
            i++;
        }

    }
}
