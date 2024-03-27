<<<<<<< HEAD
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
=======
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
>>>>>>> 1fb676ee28d4b3836acf32d6231a67ab83f4177d
