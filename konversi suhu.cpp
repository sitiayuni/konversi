#include <iostream>
using namespace std;

int main(){
	
	/* NAMA : SITI AYUNI
	   KELAS : B
	   NPM : 2117051068
	   */

	float celcius, reamur, fahrenheit, kelvin;
	int pilihan;
	
	do {
		//pilihan menu konversi
		
		cout << " ---- PILIHAN SATUAN YANG INGIN DIKONVERSI ----" << endl;
		cout << " 1. Celcius --> Reamur : " << endl ;
		cout << " 2. Reamur  --> Fahrenheit : "  << endl;
		cout << " 3. Fahrenheit --> Kelvin : "  << endl;
		cout << " 4. Kelvin --> Celcius  : "  << endl;
		cout << " Masukkan Pilihan : ";
		cin >> pilihan;
		
	switch (pilihan){
		//pilihan 1
		case 1 :
			
			cout << " Masukkan suhu = " ;
			cin >>celcius;
			reamur = (4.0/5.0) * celcius ;
	
		cout << celcius << " derajat Celcius = " << reamur <<" derajat Reamur";
 	 	cout << endl;
			
			getch ();
			break;
			
		
		// pilihan 2
		case 2 :
			clear();
			cout << " Masukkan suhu = " ;
			cin >>reamur;
			fahrenheit = (9.0/4.0)* reamur + 32;
			
		cout << reamur << " derajat Reamur = " << fahrenheit <<" derajat Fahrenheit ";
 	 	cout << endl;
 	 		
 	 		getch();
 	 		break;
		
		case 3 :
		clear();
			cout << " Masukkan suhu = " ;
			cin >> fahrenheit;
			 kelvin = (5.0/9.0) * ( fahrenheit - 32) + 273;
			
		cout << fahrenheit << " derajat Fahrenheit = " << kelvin <<" derajat Kelvin ";
 	 	cout << endl;
 	 	
		  	getch();	
			break;
			
		case 4 :
			
			clear ();
			cout << " Masukkan suhu = " ;
			cin >>kelvin;
			 celcius = kelvin - 273;
			
		cout << kelvin << " derajat Kelvin = " << celcius <<" derajat Celcius ";
 	 	cout << endl;
 	 		
 	 		getch();
			break;
		
				default:
		
			cout<<"Pilihan Tidak Ada"<<endl;
	}
	
	
	}while(pilihan ==1 || pilihan <=4);
	
	cout << endl << endl ;

		return 0 ;	
}
	
	
