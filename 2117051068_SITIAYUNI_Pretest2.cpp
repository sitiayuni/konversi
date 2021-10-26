#include<iostream>
using namespace std;

int main(){
	/* Nama 	: SITI AYUNI
	   Kelas	: Ilmu Komputer B
	   NPM		: 2117051068
	   Pretest 2 DDP B
	   */
	   
	   system ("COLOR 3");
	   double x;
	short tanggal_transaksi;
	string bulan_transaksi;
	int tahun_transaksi;
	float jumlah_uang_dalam_rupiah,harga_per1_bitcoin;
	
	/*program kalkulator konversi  mata uang rupiah ke aset digitaL Bitcoin
	*/
		
	//INPUT
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "			Program Kalkulator Konversi  Mata Uang Rupiah Ke Aset Digital Bitcoin" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl << endl;
	cout << " Silahkan isi data berikut ini dengan benar !!! " << endl;
	cout << endl;
	cout << " Masukkan tanggal transaksi\t\t\t\t\t\t: "; cin >>tanggal_transaksi;
	cin.ignore(1, '\n');
	cout << " Masukkan bulan transaksi\t\t\t\t\t\t: "; getline(cin, bulan_transaksi);
	cout << " Masukkan tahun transaksi\t\t\t\t\t\t: "; cin >> tahun_transaksi;
	cout << " Masukkan jumlah uang dalam rupiah\t\t\t\t\t: "; cin>>jumlah_uang_dalam_rupiah;
	cout << " Masukkan harga per 1 bitcoin\t\t\t\t\t\t: "; cin>>harga_per1_bitcoin;
	 
	cout << endl << endl;
	 
	 //OUTPUT
	 
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << " 			Hasil Konversi Mata Uang Rupiah Ke Aset Digital Bitcoin" << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << " Tanggal Transaksi\t\t\t\t\t\t\t: " << tanggal_transaksi << " " << bulan_transaksi << " " << tahun_transaksi << endl;
	cout << " Jumlah Bitcoin\t\t\t\t\t\t\t\t: " << (jumlah_uang_dalam_rupiah  / harga_per1_bitcoin) << " Bitcoin" << endl;
	 
	 
	 
	 return 0;
	 
	
}
