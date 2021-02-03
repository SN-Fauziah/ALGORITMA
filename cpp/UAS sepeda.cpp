#include <iostream>
using namespace::std;
 
int main(){
	string namapelanggan, kodejenis, data, jenissepeda, tipesepeda, lagi;
	int harga,totalharga, kodetipe, jumlahbeli;
	
		
	cout<<"Nama     : Siti Nur Fauziah \n";
	cout<<"Kelas    : TI.20.B.1 \n";
	cout<<"NIM      : 312010032 \n";
	
	cout<<"= DAFTAR SEPEDA =\n";
	cout<<"= JENIS SEPEDA:                  = TIPE SEPEDA                   =\n";
	cout<<"= C : CITY                       = 1 : KECIL                     =\n";
	cout<<"= M : MOUNTAIN                   = 2 : BESAR                     =\n";
	cout<<"= R : ROAD                       =                               =\n";
	
	cout<<"==================================================================\n";
do{
	cout<<"Nama Pelanggan                   : "; cin>>namapelanggan;
	cout<<"Kode Jenis                       : "; cin>>kodejenis;
	cout<<"Kode Tipe                        : "; cin>>kodetipe;
	cout<<"Jumlah Beli                      : "; cin>>jumlahbeli;
	cout<<"==================================================================\n";
	
	if(kodejenis == "c" || kodejenis == "C"){
		jenissepeda = "CITY";
			if(kodetipe == 1){
				tipesepeda = "KECIL";
				harga = 1770000;
			}else if(kodetipe == 2){
				tipesepeda = "BESAR";
				harga = 3400000;
			}
	}else if(kodejenis == "m" || kodejenis == "M"){
		jenissepeda = "MOUNTAIN";
			if(kodetipe == 1){
				tipesepeda = "KECIL";
				harga = 1720000;
			}else if(kodetipe == 2){
				tipesepeda = "BESAR";
				harga = 2195000;
			}
	}else if(kodejenis == "r" || kodejenis == "R"){
		jenissepeda = "ROAD";
			if(kodetipe == 1){
				tipesepeda = "KECIL";
				harga = 2800000;
			}else if(kodetipe == 2){
				tipesepeda = "BESAR";
				harga = 4100000;
			}
	}else{
		cout<<"SEPEDA YANG ANDA PILIH TIDAK TERSEDIA";
	}
	
	totalharga = harga*jumlahbeli;

	
	cout<<"Nama Pelanggan                   : "<<namapelanggan<<endl;
	cout<<"Jenis Sepeda                     : "<<jenissepeda<<endl;
	cout<<"Tipe Sepeda                      : "<<tipesepeda<<endl;
	cout<<"Harga                            : "<<harga<<endl;
	cout<<"Jumlah Beli                      : "<<jumlahbeli<<endl;
	cout<<"Total Harga                      : "<<totalharga<<endl;
	
	cout<<"Transaksi Lagi ? (y/n)";
	cin>>lagi;
}while(lagi == "y");
cout<<"TERIMA KASIH TELAH BERBELANJA"<<endl;
return 0;
cout<<"==================================================================\n";
}
