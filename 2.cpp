#include <iostream>
#include <cmath>
using namespace std;

main() {
    double s, a, v0, t,D,t1,t2;
    cout <<  " Vvedite S: " << endl;
    cin >> s;
    cout <<  " Vvedite V0: " << endl;
    cin >> v0;
    cout <<  " Vvedite A: " << endl;
    cin >> a;
    cout << "(" << a << "t^2)/2 +" << v0 << "*t -" << s << endl;
    //(a*t*t)/2 + V0*t - S = 0
    D = v0*v0 + 4*(a/2)*s;
    cout << "Discriminant:" << D << endl;
    if (a != 0) {
        if (D < 0){
        cout << " No " << endl;
        return 0;
        } else if(D = 0){
        t = (-v0)/a;
        cout << "t =" << t << endl;
        } else {
        t1 = ((-v0) - sqrt(v0*v0 + 4*(a/2)*s))/a;
        t2 = ((-v0) + sqrt(v0*v0 + 4*(a/2)*s))/a;
        cout << t1 << t2 << endl;
        } if (t2 > t1){
            cout << "t =" << t2 << endl;
        } else {
            cout << "t =" << t1 << endl;
        }
    } else {
        cout << " Na 0 nelsya " << endl;
    }
    return 0;
}
