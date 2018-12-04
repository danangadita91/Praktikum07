# Praktikum07


# Latihan 1 "Contoh Fungsi Pertukaran Nilai"
```
Alur Algoritma :
1. Membuat sebuah prosedur pertukaran nilai
	void tukar(int &a,int &b) {
	int c;
	c=a;
	a=b;
	b=c; }
   Penjelasan : Variable C hanya sebagai penampung nilai sementar dari variable B
		jadi, Nilai A dipindah ke B, Nilai B dipindah ke C, dan Nilai C dipindah ke A
2. Mendeklarasikan variable A dan B sebagai variable input nilai pada fungsi utama
3. Memanggil prosedur Tukar untuk menukar nilai A dan B
	tukar(a,b);
```
Berikut Kode Lengkap :
```c++
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
```
Berikut Pseudo-Code :
```
1. A= ...A <==
2. print A
3. B= ...B<==
4. Print B
5. Tukar(a,b)
6. Print A, Print B
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum07/master/Latihan1/Tukar%20Nilai.png)

# Latihan 2 "Contoh Program Fungsi Perkalian"
```
Alur Algoritma :
1. Membuat sebuah Fungsi perkalian dengan perulangan
	int kali(int x,int y){
    	int n, hasil;
    	for(n=1;n<=y;n++){
    	hasil=x*y;
    	cout<<x<<" + ";
 	}
    	cout<<" = "<<hasil;
	}
   Penjelasan : - variable x dan y sebagai penampung input nilai yang akan di eksekusi
		- variable hasil sebagai eksekutor perhitungan
		- variable n sebagai nilai perulangan dengan batas variable y
		  Misal 4x5= 4+4+4+4+4 = 20
2. Mendeklarasika Variable A dan B sebagai input nilai di Fungsi Utama(main)
	int main() {
	int a, b; }
3. Memanggil Fungsi Kali untuk perhitungan
	kali(a,b);
```
Berikut Pseudo-Code :
```
1. A= ...A<==
2. Print A
3. B= ...B<==
4. Print B
5. kali(A,B)
6. Print AxB = A+A+A+A (Sebanyak B)=hasil
```
Berikut Kode Lengkap :
```c++
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
``
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum07/master/Latihan2/Fungsi%20Perkalian.png)

# Latihan 3 "Contoh Program Variable Global"
```
Alur Algoritma :
1. Mendeklarasikan variable A sebagai variable global
	int A;
   Penjelasan : Disebut variable global karena di deklarasikan diluar prosedur (Void) dan fungsi utama(main)
2. Membuat prosedur coba dengan nilai variable A=20
	void coba(){
     	A = 20; }
3. Membuat Fungsi Utama dengan nilai variable A=10
	int main (){
     	A = 10; }
4. Memanggil prosedur coba
	coba();
```
Berikut Kode Lengkap :
```c++
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
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum07/master/Latihan3/Variable%20Global.png)

# Latihan 4 "Contoh Program Variable Lokal"
```
Alur Algoritma :
1. Membuat prosedur coba dengan nilai variable A=50
	void coba(){
     	A = 50; }
   Penjelasan : variable A disebut lokal karena dideklarasikan didalam sebuah prosedur
		dan hanya dapat dibaca oleh Prosedur coba
2. Membuat Fungsi utama dengan nilai variable A=90
	int main(){
     	A = 90; }
   Penjelasan : variable A disebut lokal karena dideklarasikan didalam sebuah fungsi
		karena variable A sudah dideklarasikan sebelumnya di dalam prosedur
		maka harus dideklarasi ulang
4. Memanggil prosedur coba
	coba();
```
Berikut Kode Lengkap ;
```c++
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
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum07/master/Latihan4/Variable%20Lokal.png)