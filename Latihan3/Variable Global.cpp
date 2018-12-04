#include <iostream>
using namespace std;

int A;
void coba(){
     A = 20;
     cout<<"Nilai A di dalam prosedur coba() : "<<A<<endl;
}

int main (){
     A = 10;
     cout<<"Nilai A di dalam fungsi main() : "<<A<<endl;
     coba();
     return 0;
}
