#include <iostream>
using namespace std;

int main() {

    // for (int i=0; i<5; i++) {
    //     cout << "hello\n";
    // }
    // i=0      0<5 true    print hello
    // i=1      1<5 true    print hello
    // i=2      2<5 true    print hello
    // i=3      3<5 true    print hello
    // i=4      4<5 true    print hello
    // i=5      5<5 false


    // for (int i=0; i<5; i++) {
    //     cout << i << endl;
    // }
    // i=0      0<5 true    print 0
    // i=1      1<5 true    print 1
    // i=2      2<5 true    print 2
    // i=3      3<5 true    print 3
    // i=4      4<5 true    print 4
    // i=5      5<5 false

    // int n = 7;
    // for (int i=0; i<2*2; i++) {
    //     cout << "hello\n";
    // }

    // total=3+3+3+3+3=15
    // int total = 0;
    // for (int i=0; i<5; i++) {
    //     total = total + 3;
    //     cout << total << endl;
    // }
    // cout << "total=" << total << endl;
    // i=0      0<5 true    total=0+3=3     print 3
    // i=1      1<5 true    total=3+3=6     print 6
    // i=2      2<5 true    total=6+3=9     print 9
    // i=3      3<5 true    total=9+3=12
    // i=4      4<5 true    total=12+3=15
    // i=5      5<5 false


    // total = 0+1+2+3+4=10
    int total = 0;
    int n = 5;
    for (int i=0; i<n; i++) {
        total = total + i;
    }
    cout << "total=" << total << endl;
    cout << "rata-rata=" << total/n << endl;
    
    // i=0      0<5 true    total=0+0=0
    // i=1      1<5 true    total=0+1=1
    // i=2      2<5 true    total=1+2=3
    // i=3      3<5 true    total=3+3=6
    // i=4      4<5 true    total=6+4=10
    // i=5      5<5 false

    for (int i = 3; i <= 10; i++) {
        cout << i << endl;
    }
    
}

// C++
//      basic
//      selection
//      repitation
//      array
//      function
//      recursion
//      tambahan

// permutasi, kombinasi*, peluang
// himpunan*
// logika*
// barisan dan deret arimatika/geometri*
// teori bilangan
// fungsi*
// exponential dan logaritma*
// bilangan biner


