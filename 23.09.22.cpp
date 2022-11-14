#include <iostream>
using namespace std;

int main (){
    // PIRMAIS UZDEVUMS
    /*
    int x = 1;
    int alpha;
    cout<<"Ievadiet alfa skaitli"<<endl;
    cin>>alpha;
    if (alpha < 1) {
        while (alpha<=x) {
            cout<<alpha<<" ";
            alpha++;
        }
    } else {
        while (x<=alpha) {
            cout<<x<<" ";
            x++;
        }
    }
    */
    // OTRAIS UZDEVUMS
    /*
    int x;
    int y = 0;
    cout<<"Ievadiet kadu skaitli"<<endl;
    cin>>x;
    while (x != 0) {
        x = x / 10;
        y++;
    }
    cout<<y<<" ";*/
    //TREÐAIS UZDEVUMS;
    int x = 0;
    int alpha;
    cout<<"Ievadiet alfa skaitli"<<endl;
    cin>>alpha;
    if (alpha < 1) {
        while (alpha<=x) {
            if (alpha % 2) {} else {cout<<alpha<<" ";}
            alpha++;
        }
    } else {
        while (x<=alpha) {
            if (x % 2) {} else {cout<<x<<" ";}
            x++;
        }
    }
}
