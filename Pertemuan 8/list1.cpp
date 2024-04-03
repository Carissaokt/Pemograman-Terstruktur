#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> angka = {2,4,5,7,8};

    cout << angka.front();
    cout << angka.back();

    list<int>::iterator it;
    for (it = angka.begin(); it != angka.end(); it++)
        cout << *it << " ";

    angka.push_front(1);
    angka.push_back(1);

    angka.pop_front();
    angka.pop_back();

    cout << angka.size();

    if(angka.empty())
        cout << "kosong";
    else
        cout << "berisi";

    angka.assign(3,0);

    list<int>::iterator it = angka.begin();
    it++;
    angka.insert(it,0);

    it++;
    it++;
    int arr[] = {11,12,13};
    angka.insert(it,begin(arr),end(arr));

}
    it++;
    it++;
    int arr[] = {11,12,13};
    angka.insert(it,begin(arr),end(arr));
>>>>>>> 3971ffa8d388b8ff605feb80b3abb44007349c4a
}
