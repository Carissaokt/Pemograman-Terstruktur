<<<<<<< HEAD
#include<iostream>
using namespace std;

class Mahasiswa{
	private:
		string nama;
	public:
		void setNama(string nama){
			this->nama = nama;
		}
		
		string getNama(){
			return nama;
		}
};

int main(){
	Mahasiswa mhs;
	
	mhs.setNama("Anta");
	cout<< "Nama: " << mhs.getNama() << endl;
}
=======
#include<iostream>
using namespace std;

class Mahasiswa{
	private:
		string nama;
	public:
		void setNama(string nama){
			this->nama = nama;
		}
		
		string getNama(){
			return nama;
		}
};

int main(){
	Mahasiswa mhs;
	
	mhs.setNama("Anta");
	cout<< "Nama: " << mhs.getNama() << endl;
}
>>>>>>> 1fb676ee28d4b3836acf32d6231a67ab83f4177d
