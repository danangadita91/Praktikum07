#include <iostream>
using namespace std;

void tukar(int &a,int &b){
int c;
c=a;
a=b;
b=c;
}

int main()
{
int a,b;
cout<<"Nilai Sebelum Proses Pertukaran\n";
cout<<"Masukkan nilai 1: ";
cin>>a;
cout<<"Masukkan nilai 2: ";
cin>>b;
cout<<"\nNilai Setelah Proses pertukaran\n";
tukar(a,b);
cout<<"Nilai 1: "<<a<<endl;
cout<<"Nilai 2: "<<b<<endl;

 return 0;
}
