#include <iostream>
using namespace std;

void coba(){
    int A;
     A = 50;
     cout<<"Nilai A di dalam prosedur coba() : "<<A<<endl;
}
int main (){
     int A;
     A = 90;
     cout<<"Nilai A di dalam fungsi main() : "<<A<<endl;
     coba();
     return 0;
}
