#include <iostream>
using namespace std;

int kali(int x,int y){
    int n, hasil;
    for(n=1;n<=y;n++){
    hasil=x*y;
    cout<<x<<" + ";
    }
    cout<<" = "<<hasil;
}
int main()
{
int a, b;
cout<<"Masukan Bilangan ke-1 : ";
cin>>a;
cout<<"Masukan Bilangan ke-2 : ";
cin>>b;
cout<<endl;
cout<<a<<" x "<<b<<" = ";
kali(a,b);
}
