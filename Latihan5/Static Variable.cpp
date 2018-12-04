#include <iostream>
using namespace std;

void fun(){
static int i = 10;
cout <<"Nilai Static : "<<++i;
}
int main(){
fun();
cout << endl;
fun();
cout << endl;
fun();
cout << endl;
fun();
cout << endl;
fun();
cout << endl;
fun();
cout << endl;
return 0;
}
