#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main (){
	int tiket, jumlah, harga,total, pembayaran;
	int diskon,hargabersih;
    int bank,pin,Bayar,nmr,macam,kembalian;
	string nama,nomor,lanjut;
	string jenis [5] = {"1. VVIP (3.000.000)", "2. VIP (2.000.000) ","3. Regular (300.000)"};
	string metode [3] = {"1. Transfer bank", "2. E-wallet", "3. on the spot"};

	do {
		cout << "================================================" <<endl;
		cout << "                                                " <<endl;
		cout << "             PEMBELIAN TIKET KONSER             " <<endl;
		cout << "              STADION BIMA CIREBON              " <<endl;
		cout << "              17 - NOVEMBER - 2024              " <<endl;
		cout << "                                                " <<endl;
		cout << "================================================" <<endl;
		 cout << "                MACAM KONSER                    " << endl;
        cout << "================================================" << endl;
        cout << "1. NDXAka" << endl;
        cout << "2. Seventeen" << endl;
        cout << "3. The Changcuters" << endl;
        cout << "================================================" << endl;
        cout << "PILIH PILIHAN ANDA:";
        cin >> macam;
        cin.ignore();  
        
		cout <<endl;
		cout <<endl;
		switch (macam){
		case 1: {
			
		cout << "masukan nama anda          :";
		getline (cin,nama);
		cout << "masukan nomor telefon anda :";
		cin >>nomor;
		system ("cls");
		cout <<endl;
		cout << "============================================"<<endl;
		cout << "                JENISS TIKET "<<endl;
		cout << "============================================"<<endl;
		cout << "1. "<<jenis [0] <<endl;
		cout << "2. "<<jenis [1] <<endl;
		cout << "3. "<<jenis [2] <<endl;
		cout <<"============================================="<<endl;
		cout <<endl;
		cout <<"silahkan pilih tiket yang anda inginkan " <<endl;
		cout <<endl;
		cout << "pilih [1-3] : "; cin >> tiket;
		cout <<endl;
		if (tiket == 1){
			harga =3000000;
			cout <<"Harga tiket VVIP ( premium class ) = 3000000 " <<endl;	
		}
		else if (tiket == 2){
			harga = 2000000;
			cout <<"Harga tiket VIP ( tempat khusus ) = 2000000 " <<endl;	
		}
		else if (tiket == 3){
			harga = 300000;
			cout <<"Harga tiket REGULAR ( Standing ) = 300000 " <<endl;	
		}
		cout << "Jumlah Tiket Yang  Ingin Anda Beli : "; cin >> jumlah;
		system ("cls");
		if (jumlah >= 2 && jumlah <=5){
		total = harga * jumlah;
		diskon = total*20/100;
		hargabersih = total - diskon;
		int p;
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 20% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout <<endl;
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;
		}
		
	 	else if (jumlah > 5){
		total = harga * jumlah;
		diskon = total*40/100;
		hargabersih = total - diskon;
		
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 40% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout << endl;
		
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;	
		}
		else {
		total = harga * jumlah;
		diskon = total*10/100;
		hargabersih = total - diskon;
		
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 10% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout << endl;
		
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;	
		}
		cout << "================================="<<endl;
		cout << "      Jenis Metode Pembayaran "<<endl;
		cout << "================================="<<endl;
		cout <<metode [0] <<endl;
		cout <<metode [1] <<endl;
		cout <<metode [2] <<endl;
		cout <<endl;
		cout << "Silahkan Pilih Metode Pembayaran Yang Anda Inginkan "<<endl;
		cout << "pilih [1-3]  : "; cin >>pembayaran; 
        system ("cls");
		if ( pembayaran == 1){
			cout <<"================================================"<<endl;
            cout <<"|                  TRANSFER BANK.              |"<<endl;
            cout <<"================================================"<<endl; 
            cout <<"| 1. BCA                                       |" << endl;
            cout <<"| 2. BRI.                                      |" << endl;
            cout <<"| 3. BNI.                                      |" << endl;
            cout <<"================================================"<<endl; 
	        cin >> bank ;
             if (bank == 1){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
					 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
				 }
             }
             else if (bank == 2){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cout <<endl;
	             cin.ignore();
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
            }
            }else if (bank == 3){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
             }else {
             cout << "INVALID" << endl;
             }
            
    	}
		else if ( pembayaran == 2){
			cout <<"================================================"<<endl;
            cout <<"|                    E-WALLET                  |"<<endl;
            cout <<"================================================"<<endl; 
            cout <<"| 1. GOPAY                                     |" << endl;
            cout <<"| 2. DANA                                      |" << endl;
            cout <<"| 3. SHOOPE PAY                                |" << endl;
            cout <<"================================================"<<endl; 
	        cin >> bank ;
             if (bank == 1){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout <<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
             }
			 else if (bank == 2){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout<<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             cout <<endl;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
            }
			else if (bank == 3){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout <<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             cout <<endl;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
              }
             }
			 else {
             cout << "INVALID" << endl;
             }
		}
		else if ( pembayaran == 3){
		cout << " Silahkan Melakukan Pembayaran Di Loket Bayar "<<endl;	
		}
		cout <<endl;
		cout <<" NOTE : untuk mendapatkan tiket fisik, tukarkan BUKTI PEMBAYARAN ke loket penukaran tiket ! ";
		cout <<endl;
		break;
	    }
	    case 2: {
	    cout << "masukan nama anda          :";
		getline (cin,nama);
		cout << "masukan nomor telefon anda :";
		cin >>nomor;
		cout <<endl;
		cout << "============================================"<<endl;
		cout << "                JENISS TIKET "<<endl;
		cout << "============================================"<<endl;
		cout << "1. "<<jenis [0] <<endl;
		cout << "2. "<<jenis [1] <<endl;
		cout << "3. "<<jenis [2] <<endl;
		cout <<"============================================="<<endl;
		cout <<endl;
		cout <<"silahkan pilih tiket yang anda inginkan " <<endl;
		cout <<endl;
		cout << "pilih [1-3] : "; cin >> tiket;
		cout <<endl;
		if (tiket == 1){
			harga =3000000;
			cout << "Harga tiket VVIP ( premium class ) = 3000000 " <<endl;	
		}
		else if (tiket == 2){
			harga = 2000000;
			cout << "Harga tiket VIP ( tempat khusus ) = 2000000 " <<endl;	
		}
		else if (tiket == 3){
			harga = 300000;
			cout << "Harga tiket REGULAR ( Standing ) = 300000 " <<endl;	
		}
		system ("cls");
		cout << " Jumlah Tiket Yang  Ingin Anda Beli : "; cin >> jumlah;
		if (jumlah >= 2 && jumlah <=5){
		total = harga * jumlah;
		diskon = total*20/100;
		hargabersih = total - diskon;
		
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 20% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout << endl;
		
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;	
		}
		
	 	else if (jumlah > 5){
		total = harga * jumlah;
		diskon = total*40/100;
		hargabersih = total - diskon;
		
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 40% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout << endl;
		
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;	
		}
		else {
		total = harga * jumlah;
		diskon = total*10/100;
		hargabersih = total - diskon;
		
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 10% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout << endl;
		
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;	
		}
		cout << "================================="<<endl;
		cout << "     Jenis Metode Pembayaran  "<<endl;
		cout << "================================="<<endl;
		cout <<metode [0] <<endl;
		cout <<metode [1] <<endl;
		cout <<metode [2] <<endl;
		cout <<endl;
		cout << " Silahkan Pilih Metode Pembayaran Yang Anda Inginkan "<<endl;
		cout << " pilih [1-3]  : "; cin >>pembayaran; 
        	system ("cls");
			if ( pembayaran == 1){
			cout <<"================================================"<<endl;
            cout <<"|                  TRANSFER BANK.              |"<<endl;
            cout <<"================================================"<<endl; 
            cout <<"| 1. BCA                                       |" << endl;
            cout <<"| 2. BRI.                                      |" << endl;
            cout <<"| 3. BNI.                                      |" << endl;
            cout <<"================================================"<<endl; 
	        cin >> bank ;
             if (bank == 1){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
					 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
				 }
             }
             else if (bank == 2){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
            }
            }else if (bank == 3){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
             }else {
             cout << "INVALID" << endl;
             }
            
    	}
		else if ( pembayaran == 2){
			cout <<"================================================"<<endl;
            cout <<"|                    E-WALLET                  |"<<endl;
            cout <<"================================================"<<endl; 
            cout <<"| 1. GOPAY                                     |" << endl;
            cout <<"| 2. DANA                                      |" << endl;
            cout <<"| 3. SHOOPE PAY                                |" << endl;
            cout <<"================================================"<<endl; 
	        cin >> bank ;
             if (bank == 1){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout <<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
             }
			 else if (bank == 2){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout<<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             cout <<endl;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
            }
			else if (bank == 3){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout <<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             cout <<endl;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
              }
             }
			 else {
             cout << "INVALID" << endl;
             }
		}
		else if ( pembayaran == 3){
		cout << " Silahkan Melakukan Pembayaran Di Loket Bayar "<<endl;	
		}
		cout <<endl;
		cout <<" NOTE : untuk mendapatkan tiket fisik, tukarkan BUKTI PEMBAYARAN ke loket penukaran tiket ! ";
		cout <<endl;
		break;
	    }
		
		case 3: {
		cout << "masukan nama anda          :";
		getline (cin,nama);
		cout << "masukan nomor telefon anda :";
		cin >>nomor;
		cout <<endl;
		cout << "============================================"<<endl;
		cout << "                JENISS TIKET "<<endl;
		cout << "============================================"<<endl;
		cout << "1. "<<jenis [0] <<endl;
		cout << "2. "<<jenis [1] <<endl;
		cout << "3. "<<jenis [2] <<endl;
		cout <<"============================================="<<endl;
		cout <<endl;
		cout <<"silahkan pilih tiket yang anda inginkan " <<endl;
		cout <<endl;
		cout << "pilih [1-3] : "; cin >> tiket;
		cout <<endl;
		cout << "pilih [1-3] : "; cin >> tiket;
		if (tiket == 1){
			harga =3000000;
			cout <<"Harga tiket VVIP ( premium class ) = 3000000 " <<endl;	
		}
		else if (tiket == 2){
			harga = 2000000;
			cout <<"Harga tiket VIP ( tempat khusus ) = 2000000 " <<endl;	
		}
		else if (tiket == 3){
			harga = 300000;
			cout <<"Harga tiket REGULAR ( Standing ) = 300000 " <<endl;	
		}
		cout <<"Jumlah Tiket Yang  Ingin Anda Beli : "; cin >> jumlah;
		if (jumlah >= 2 && jumlah <=5){
		total = harga * jumlah;
		diskon = total*20/100;
		hargabersih = total - diskon;
		
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 20% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout << endl;
		
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;	
		}
		
	 	else if (jumlah > 5){
		total = harga * jumlah;
		diskon = total*40/100;
		hargabersih = total - diskon;
		
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 40% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout << endl;
		
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;	
		}
		else {
		total = harga * jumlah;
		diskon = total*10/100;
		hargabersih = total - diskon;
		
		cout <<"total harga anda sebelum diskon : Rp"<<total<<endl;
		cout <<"diskon ( 10% )                  : Rp"<<diskon<<endl;
		cout <<"                                --------------------"<<endl;
		cout <<"Harga bersih                    : Rp"<<hargabersih<<endl;
		cout << endl;
		
		cout << " ************************************************** " << endl;
		cout << " :              BUKTI PEMBELIAN                   : " << endl;
     	cout << " ************************************************** " << endl;	
     	cout << " Nama                    :"<< nama<<endl;;
     	cout <<endl;
     	cout << " Nomor Telefon           :"<< nomor<<endl;
     	cout <<endl;
        cout << " Total Bayar             :Rp"<<hargabersih<<endl;
		cout <<endl;
		cout <<endl;	
		}
		
		cout << "================================="<<endl;
		cout << "      Jenis Metode Pembayaran "<<endl;
		cout << "================================="<<endl;
		cout <<metode [0] <<endl;
		cout <<metode [1] <<endl;
		cout <<metode [2] <<endl;
		cout <<endl;
		cout <<"Silahkan Pilih Metode Pembayaran Yang Anda Inginkan "<<endl;
		cout <<"pilih [1-3]  : "; 
		cin >>pembayaran; 
        system ("cls");
		if ( pembayaran == 1){
			cout <<"================================================"<<endl;
            cout <<"|                  TRANSFER BANK.              |"<<endl;
            cout <<"================================================"<<endl; 
            cout <<"| 1. BCA                                       |" << endl;
            cout <<"| 2. BRI.                                      |" << endl;
            cout <<"| 3. BNI.                                      |" << endl;
            cout <<"================================================"<<endl; 
	        cin >> bank ;
             if (bank == 1){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
					 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
				 }
             }
             else if (bank == 2){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
            }
            }else if (bank == 3){
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
             }else {
             cout << "INVALID" << endl;
             }
            
    	}
		else if ( pembayaran == 2){
			cout <<"================================================"<<endl;
            cout <<"|                    E-WALLET                  |"<<endl;
            cout <<"================================================"<<endl; 
            cout <<"| 1. GOPAY                                     |" << endl;
            cout <<"| 2. DANA                                      |" << endl;
            cout <<"| 3. SHOOPE PAY                                |" << endl;
            cout <<"================================================"<<endl; 
	        cin >> bank ;
             if (bank == 1){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout <<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
             }
			 else if (bank == 2){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout<<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             cout <<endl;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
             }
            }
			else if (bank == 3){
	             cout <<"SILAHKAN MASUKAN NOMOR ANDA :"<<endl;
	             cout <<"NOMOR : ";
	             cin >>nmr;
	             cin.ignore();
	             cout <<endl;
	             cout <<"SILAHKAN MASUKAN PIN ANDA :"<<endl;
	             cout <<"PIN : ";
	             cin >>pin;
	             cin.ignore();
	             cout <<endl;
	             cout <<"MASUKAN JUMLAH NOMINAL UANG ANDA :";
	             cin >> Bayar;
	             cout <<endl;
	             	if (Bayar >= hargabersih){
	             		kembalian = Bayar - hargabersih;
						cout <<"SISA UANG ANDA ADALAH :Rp"<<kembalian<<endl; 
	             		cout <<"PEMBAYARAN BERHASIL !!"<<endl;
				 }
				 else {
				cout <<"UANG ANDA TIDAK CUKUP !!"<<endl;
              }
             }
			 else {
             cout << "INVALID" << endl;
             }
		}
		else if ( pembayaran == 3){
		cout << "Silahkan Melakukan Pembayaran Di Loket Bayar "<<endl;	
		}
		cout <<endl;
		cout <<"NOTE : untuk mendapatkan tiket fisik, tukarkan BUKTI PEMBAYARAN ke loket penukaran tiket ! ";
		cout <<endl;
		break;
	    }
	    	default : {
				cout <<"INVALID";
			}
		}
		cout << "" << endl;	
		cout <<"Pesan Tiket Kembali [y/t] ? :";
		cin >>lanjut;
		cin.ignore(1024, '\n');
		system ("cls");
	}
while (lanjut == "y");
cout << endl;
cout <<" ---------------------Selamat Menikmati Konser " <<nama<<"---------------------";

return 0;
}