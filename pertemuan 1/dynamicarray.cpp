#include <iostream>
using namespace std;

int main(){
    system("cls");
    int n;

    // int arr1[5]
    
    cout << "masukkan jumlah data:";
    cin >> n;
    
    int* arr= new int [n];
    for (int i = 0; i < n; i++){
        cout << "data ke-"<< i + 1 << ":";
        cin >> arr[i];   
    }

    cout << "output data\n";
    for (int i = 0; i < n; i++){
        cout << "data ke-"<< i + 1 << ":";
        cout << arr[i] << "\n";


    }
}

// #include <iostream>
// using namespace std;

// int main() {
//     system("cls");
//     cout << "Tes";
// }