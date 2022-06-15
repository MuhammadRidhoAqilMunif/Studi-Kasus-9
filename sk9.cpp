#include <iostream>
using namespace std;

class rak{
	public:
		void input();
		void sorting();
		void hasil();
	private:
		int buku[24],buku2[12][12];
    	int br, kl, tmp ;
	  	int i = 0;
};

void rak::input(){
	cout << "Masukkan data nomor buku: ";
  	cout << endl << endl;
  	for(int i = 0; i < 24; i++){
    	cout << "Nomor Buku ke-[" << i << "]: ";
    	cin >> buku[i];
  	}
  	cout << "\nData nomor buku: ";
  	for(int i=0; i < 24; i++){
    	cout << buku[i] << " ";
  	}
  	cout << endl << endl;
  	for(int i = 0; i < 70; i++){
  		cout << "-";
	}
  	cout << endl;
}

void rak::sorting(){
  	for (int i = 0; i < 24; i++){ 
    	for(int j = i+1; j < 24; j++ ){
      		if (buku[i] > buku[j]){
        		tmp = buku[i];
        		buku[i] = buku[j];
        		buku[j] = tmp;   
      		}
    	}
  	}
  	cout << "Nomor buku setelah diurutkan : ";
  	for(int i = 0; i < 24; i++){
    	cout << buku[i] << "  ";
  	}
  	cout << endl;
}

void rak::hasil(){
	int i = 0;
  	cout << "Banyak baris: ";
  	cin >> br;
  	cout << "Banyak kolom: ";
  	cin >> kl;
  	for(int k = 0; k<br; k++){
  		for(int l=0; l<kl; l++){
  			buku2[k][l] = buku[i];
  			i++;
	  	}
  	}
  	cout << endl << endl;
  	for(int i = 0; i < 70; i++){
  		cout << "-";
	}
  	cout << "\nHasil Konvers\n";
	cout << endl;
  	for(int k = 0; k < br; k++){
  		for(int l = 0; l < kl; l++){
  			cout << buku2[k][l] << "  ";
	  	}
	  	cout << endl;
  	}
}

int main(){
  	rak bk;
  
  	bk.input();
  	cout << endl;
  	bk.sorting();
  	cout << endl;
  	bk.hasil();
  
  	return 0;
}
