#include<iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		Mahasiswa(string nama, string x){
			this->nama = nama;
			npm = x;
		}
};

int main(){
	Mahasiswa Mhs("Reza", "2117");
	
	cin>> Mhs.nama;
	cin>> Mhs.npm;
	
	cout<< "Nama: " << Mhs.nama << endl;
	cout<< "Npm: " << Mhs.npm;
}
