#include <iostream>
using namespace std;

//PIRMAIS UZDEVUMS
/*int darbiba;
float x, y;

int slozheniye(float x, float y){
    cout<<x+y;
}

int vichitaniye(float x, float y){
    cout<<x-y;
}

int umnozheniye(float x, float y){
    cout<<x*y;
}

int deleniye(float x, float y){
    cout<<x/y;
}

int main(){
    cout<<"Izvelies darbibas numuru\n1. darb. - [a+b]\n2. darb. - [a-b]\n3. darb. - [a*b]\n4. darb. - [a/b]\n";
    cin>>darbiba;
    if (darbiba > 0 && darbiba < 5){
        cout<<"Ievadiet a skaitli\n";
        cin>>x;
        cout<<"Ievadiet b skaitli\n";
        cin>>y;
        cout<<"Atbilde ir ";
        if (darbiba == 1) {slozheniye(x, y);}
        else if (darbiba == 2) {vichitaniye(x, y);}
        else if (darbiba == 3) {umnozheniye(x, y);}
        else if (darbiba == 4) {deleniye(x, y);}
    }
    else {
        cout<<"Pamegini velreiz!\n\n";
        main();
    }
}*/
//OTRAIS UZDEVUMS
int main(){
    int skaitlis;
    int binskaitlis;
    int i = 0;
    cout<<"Ievadiet skaitli\n";
    cin>>skaitlis;
    for (i; skaitlis > 1; i++) {
        int binskaitlis[i] = {skaitlis % 2};
        if (skaitlis % 2 == 1){
            skaitlis--;
            return skaitlis;
        }
        skaitlis = skaitlis / 2;
        return i, binskaitlis;
    }
    cout<<"Atbilde: ";
    for (i; i!=0; i--) {
        cout<<binskaitlis[i];
    }
}
