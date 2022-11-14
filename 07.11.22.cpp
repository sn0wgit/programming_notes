#include <iostream>
using namespace std;

class cilveks {
public:
    string vards = "Testis";
    int augstums = 171;
    int vecums = 15;
    string nacionalitate = "Krievs";

    void paramPrint(){
        cout<<endl<<"Cilveks \""<<vards<<"\""<<endl;
        cout<<"Augstums: "<<augstums<<endl;
        cout<<"Vecums: "<<vecums<<endl;
        cout<<"Nacionalitate: "<<nacionalitate<<endl;
    }
    //Konstruktors
    cilveks(string v, int a, int vec, string nac){
        vards = v;
        augstums = a;
        vecums = vec;
        nacionalitate = nac;
    }
};

int main(){
    cout<<"Uztaisisim jaunu cilveku!"<<endl<<endl;
    cilveks testis;
    testis.vards = "Testis";
    cout<<"Ievadiet Testisa augstumu!"<<endl;
    cin>>testis.augstums;
    cout<<"Ievadiet Testisa vecumu!"<<endl;
    cin>>testis.vecums;
    cout<<"Ievadiet Testisa nacionalitati!"<<endl;
    cin>>testis.nacionalitate;
    testis.paramPrint();
}
