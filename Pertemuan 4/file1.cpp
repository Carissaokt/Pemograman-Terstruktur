#include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     string teks[4];

//     for(int i = 0; i < 4; i++){
//         cin >> teks[i];
//     }

//     ofstream writeFile("barang.txt");

//     for(int i = 0; i < 4; i++){
//         writeFile << teks[i] << "\n";
//     }
// }

#include <iostream>
using namespace std;

void find(int matrix[3][3], int& minVal, int& maxVal) {

    minVal = maxVal = matrix[0][0];

    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int num = matrix[i][j];
            if (num < minVal) {
                minVal = num;
            } else if (num > maxVal) {
                maxVal = num;
            }
        }
    }
}

int main() {
    int matrix[3][3] = {
        {15, 23, 5},
        {10, 22, 1},
        {43, 19, 8}
    };

    int minVal, maxVal;

    find(matrix, minVal, maxVal);

    cout << minVal << " " << maxVal << endl;

    return 0;
}

