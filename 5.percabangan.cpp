#include <iostream>
using namespace std;

int main() {

    // string password = "rahasia";

    // if (password == "rahasia") {
    //     cout << "Login berhasil" << endl;
    //     cout << "Login berhasil" << endl;
    // }

    // cout << "hello" << endl;
    // + - * / %

    // int x = 6;
    // if (x % 2 == 0) {
    //     cout << "genap" << endl;
    //     cout << "genap" << endl;
    // } else {
    //     cout << "ganjil" << endl;
    //     cout << "ganjil" << endl;
    // }

    int x = 0;
    if (x > 0) {
        cout << "positif" << endl;
    } else if (x < 0) {
        cout << "negatif" << endl;
    } else {
        cout << "nol" << endl;
    }

    cout << "hello\n";


    // logic operator
    // && || !

    // true && true = true
    // true && false = false
    // false && true = false
    // false && false = false

    // true || true = true
    // true || false = true
    // false || true = true
    // false || false = false

    // !true = false
    // !false = true

    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl << endl;


    // operator perbandingan
    // > >= < <=  == !=

    int n = 0;
    if (n % 2 == 0 && n > 0) {
        cout << "genap positif\n";
    } else if (n % 2 == 0 && n < 0) {
        cout << "genap negatif\n";
    } else if (n % 2 != 0 && n > 0) {
        cout << "ganjil positif\n";
    } else if (n % 2 == 1 && n < 0) {
        cout << "ganjil negatif\n";
    } else {
        cout << "nol\n";
    }

    x = -3;
    if (x % 2 == 0) {
        if (x > 0) {
            cout << "genap positif\n";
        } else if(x < 0) {
            cout << "genap negatif\n";
        } else {
            cout << "nol\n";
        }
    } else {
        if (x > 0) {
            cout << "ganjil positif\n";
        } else if(x < 0) {
            cout << "ganjil negatif\n";
        }
    }


}