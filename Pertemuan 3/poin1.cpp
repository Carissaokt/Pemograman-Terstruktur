<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
	int arr[5] = {10, 20, 30, 40, 50};
	int *ptr = arr;
	
	for(int i = 0; i < 5; i++){
		cout << "Value of arr[" << i <<"] = " << *ptr << endl;
		ptr++;  
	}
	
	return 0;
}
=======
#include <iostream>
using namespace std;

int main(){
	int arr[5] = {10, 20, 30, 40, 50};
	int *ptr = arr;
	
	for(int i = 0; i < 5; i++){
		cout << "Value of arr[" << i <<"] = " << *ptr << endl;
		ptr++;  
	}
	
	return 0;
}
>>>>>>> 1fb676ee28d4b3836acf32d6231a67ab83f4177d
