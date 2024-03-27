#include<iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
		
		void Perkenalan(){
			cout<< "Nama: " << nama << endl;
			cout<< "Npm: " << npm << endl;
		}
};

int main(){
	Mahasiswa Mhs;
	
	cin>> Mhs.nama;
	cin>> Mhs.npm;
	
	cout<< Mhs.nama << " " << Mhs.npm;
}
