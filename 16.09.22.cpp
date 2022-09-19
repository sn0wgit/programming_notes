#include <iostream>
using namespace std;
int main () {
    // STUNDAS DARBS
  /*int x;
    cout<<"Ievadiet skaitli ar intervalu [10; 20]"<<endl;
    cin>>x;
    if (x >= 10 && x <= 20) {
        cout<<"Paldies";
    } else {cout<<"Nepareizi";}*/
    int x;
    int y;
    int z;

    cout<<"Ievadiet pirmas malas garumu"<<endl;
    cin>>x;
    cout<<"Ievadiet otras malas garumu"<<endl;
    cin>>y;
    cout<<"Ievadiet tresas malas garumu"<<endl;
    cin>>z;

    /*if (a <= 0 || b <= 0 || c <= 0){
        cout<<"Garumi nevar but negativi vai nulle"<<endl;
    } else {
        if (a + b > c) {
            if (a < c || b < c) {cout<<"Eksiste";} else {cout<<"Neeksiste";}
        } else if (b + c > a) {
            if (b < a || c < a) {cout<<"Eksiste";} else {cout<<"Neeksiste";}
        } else if (c + a > b) {
            if (c < b || a < b) {cout<<"Eksiste";} else {cout<<"Neeksiste";}
        }
    }*/
    if ((x+y>z) || (y=z>x) || (x+z>y)){cout<<"Eksiste";} else {cout<<"Neeksiste";}
}
