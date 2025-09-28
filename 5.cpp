#include <iostream>
using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;
    int a = 0, b = 0;
    if (A == N){
        cout << ">A";
        return 0;
    } else if (B == N){
        cout << ">B";
        return 0;
    } else if (A+B == N){
        cout << ">A" << endl << ">B";
        return 0;
    } else{
            for (int step = 0; step < 100; step++) {
            if (a == N || b == N || a + b == N) {
                return 0;
            }
        
        // Операции:
            if (a == 0) {
            // >A - заполнить сосуд A
                a = A;
                cout << ">A" << endl;
            }
            else if (b == B) {
            // B> - вылить сосуд B
                b = 0;
                cout << "B>" << endl;
            }
            else {
            // A>B - перелить из A в B
                int space = B - b;
                if (a > space) {
                    a -= space;
                    b = B;
                } else {
                    b += a;
                    a = 0;
                }
                cout << "A>B" << endl;
            }
        }
    }
    cout << "mission impossible" << endl;
    return 0;
}
