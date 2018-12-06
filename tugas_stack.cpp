#include <iostream>
#define MAX 3
using namespace std;

struct Stack{
	int a, np[MAX];
	string nama [MAX], posisi [MAX];
}tumpuk;

	void init(){
		tumpuk.a=-1;
	}
	
	bool kosong(){
		return tumpuk.a==-1;
	}
	
	bool full(){
		return tumpuk.a==MAX-1;
	}
	
	
	void push(){
		if(full()){
			cout<<"\nTUMPUKAN PENUH"<<endl;
		}
		else{
			tumpuk.a++;
			cout<<"\nNomor Punggung	: ";
			cin>>tumpuk.np[tumpuk.a];
			cout<<"\nNama Pemain	: ";
			cin>>tumpuk.nama[tumpuk.a];
			cout<<"\nPosisi	: ";
			cin>>tumpuk.posisi[tumpuk.a];
		}
	}
	
	void pop(){
		if(kosong()){
			cout<<"\nData Kosong"<<endl;
		}
		else{
			cout<<"\nData "<<tumpuk.nama[tumpuk.a]<<"Telah di hapus";
			tumpuk.a--;
		}
	}
	
	void printStack(){
		if(kosong()){
			cout<<"\nData Kosong"<<endl;
		}
		else{
			cout<<"\n\nNomer Punggung "<<tumpuk.np[tumpuk.a]<<" ,nama "<<tumpuk.nama[tumpuk.a]<<" ,nama "<<tumpuk.posisi[tumpuk.a]<<" telah ditambahkan :";
			cout<<"\nNP 	Nama		posisi"<<endl;
			for(int i=tumpuk.a; i>=0; i--){
				cout<<tumpuk.np[i]<<"	"<<tumpuk.nama[i]<<"	"<<tumpuk.posisi[i]<<endl;
			}
		}
	}
	
	
	int main(){
		int pilih;
		init();
		do{
			printStack();
			cout<<"\n\n";
			cout<<"1.Input Data"<<endl;
			cout<<"2.Hapus Data"<<endl;
			cout<<"3.Selesai"<<endl;
			cout<<endl;
			cout<<"Masukkan Pilihan: ";
			cin>>pilih;
			
			switch(pilih){
				case 1:
					push();
					break;
				case 2:
					pop();
					break;
				case 3:
					cout<<"Selesai"<<endl;
					break;
				default:
					cout<<"Salah Memilih Angka"<<endl;
			}
		}while(pilih!=3);
	}
	
	
