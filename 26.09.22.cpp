#include <iostream>
using namespace std;

int main() {
    cout<<"Izvelejies mikroprogrammas numuru"<<endl;
    cout<<"1 - Izprinte visus skaitļus no 0 lidz 10"<<endl;
    cout<<"2 - Izprintet pāra skaitlus no 0 lidz lietotaja ievaditam"<<endl;
    cout<<"3 - Izprintet visus divu skaitlu kopigus rezinatajus"<<endl;
    cout<<"4 - (Bonusa uzdevus) Izprintet lielako divu skaitlu kopigu reizinataju"<<endl;
    int alpha;
    cin>>alpha;
    if (alpha == 1){
        // PIRMAIS UZDEVUMS
        int x = 10;
        for (x; x>=0; x--) {cout<<x<<" ";}
    } else if (alpha == 2){
        //OTRAIS UZDEVUMS
        int x;
        int y = 0;
        cout<<"Ievadiet skaitli"<<endl;
        cin>>x;
        if (x > 1){
            for(y; y<=x; y=y+2){cout<<y<<" ";}
        } else if (x < -1) {
            for(y; y>=x; y=y-2){cout<<y<<" ";}
        } else {cout<<"0 E6JLAH?";}
    } else if (alpha == 3) {
        // TREŠAIS UZDEVUMS
        int x, y; // divi skaitļi
        int z; // max kopīgais reizinātājs
        int i = 0;
        cout<<"Ievadiet pirmo skaitli: ";cin>>x;
        cout<<"Ievadiet otro skaitli: ";cin>>y;
        cout<<"Kopigie reizinataji ir: ";
        if (x >= y){ // Pirmais skaitlis ir lielāks
            z = y; // Tiek atrasts mazākais reizinātājs
            while (z >= i) { //Kāmēr pašreizējs reizinātājs nav vienāds ar leilāko iespējamo
                i++; // Meklē iespējamo reizinātāju
                if (x%i == 0 && y%i == 0) {cout<<i<<" ";} // Izprintē to
            }
        } else { // Otrais skaitlis ir lielāks
            z = x; // Tiek atrasts mazākais reizinātājs
            while (z >= i) { //Kāmēr pašreizējs reizinātājs nav vienāds ar leilāko iespējamo
                i++; // Meklē iespējamo reizinātāju
                if (x%i == 0 && y%i == 0) {cout<<i<<" ";} // Izprintē to
            }
        }
    } else (if alpha == 4) {
        // BONUSA UZDEVUMS
        int x, y; // divi skaitļi
        int z; // max kopīgais reizinātājs
        int i;
        cout<<"Ievadiet pirmo skaitli: ";cin>>x;
        cout<<"Ievadiet otro skaitli: ";cin>>y;
        cout<<"Lielakais kopigais reizinatajs ir ";
        if (x >= y){ // Pirmais skaitlis ir lielāks
            z = y; // Tiek atrasts lielākais iespējamais reizinātājs
            i = z; // Pāšreizējais reizinātājs ir lielākais iespējamais
            while (z % i != 0) { //Kāmēr pašreizējs reizinātājs nav vienāds ar leilāko iespējamo
                i--; // Meklē iespējamo reizinātāju
            }
        } else { // Otrais skaitlis ir lielāks
            z = x; // Tiek atrasts lielākais iespējamais reizinātājs
            i = z; // Pāšreizējais reizinātājs ir lielākais iespējamais
            while (z % i != 0) { //Kāmēr pašreizējs reizinātājs nav vienāds ar leilāko iespējamo
                i--; // Meklē iespējamo reizinātāju
            }
        }
        if (x%i == 0 && y%i == 0) {cout<<i<<" ";} // Izprintē to
    } else {cout<<"E6JLAH?";}
}
