#include <iostream>
using namespace std;
main () {
    int A, B, schet = 0;
    cin >> A >> B;
    while (A!=B){
        if ((A % 2 == 0) && ((A/2)>B)) {
            A = A/2;
            schet ++;
        } else{
            A = A-1;
            schet ++;
        }
    }
    cout << schet << endl;
    return 0;
}
