#include <iostream>
using namespace std ;

struct tiketkonser {
	string id, artis ;
	int stok ;
	int harga;
};

tiketkonser jadwalkonser[5] ;

void inisialisasijadwal(){
	jadwalkonser[0] = { "g01", "perunggu  " ,250 , 160000 } ;
	jadwalkonser[1] = { "g02", "blackpink ", 200 , 250000} ;
	jadwalkonser[2] = { "g03","cortis    ", 150 , 1700000} ;
	jadwalkonser[3] = { "g04","BTS       ", 300 , 3200000} ;
	jadwalkonser[4] = { "g05","EXO       ", 450 , 3200000} ;
}

void tampiljadwal (){
	cout << "=== JADWAL KONSER ===" << endl;
	for (int i = 0; i < 5 ; i++){
		 cout << "| ID : "<<jadwalkonser[i].id
		 	  << "| Artis : "<<jadwalkonser[i].artis
		 	  << "| Stok :" <<jadwalkonser[i].stok
			  << "| Harga : Rp. "<< jadwalkonser[i].harga<<"\n";
	}
}