#include <iostream>
using namespace std;

int main(){
    //PIRMAIS UZDEVUMS
  /*cout<<"Kura skaitla faktorialu jus gribat iegut?\n";
    int x; //skaitlis
    int z = 1; // atbilde
    cin>>x;
    if (x > 1) {
        for (x; x >= 1; x--) {
            z = z * x;
        }
    }
    cout<<z;*/
    //OTRAIS UZDEVUMS
  /*int first = 1;
    int second = 1;
    int next;
    int loopinput;
    cout<<"Ievadiet skaitli\n";
    cin>>loopinput;
    int loop = loopinput - 2;
    cout<<first<<" "<<second<<" ";
    next = first + second;
    for (loop; loop > 0; loop--)
    {
        cout<<next<<" ";
        first = second;
        second = next;
        next = first + second;
    }*/
    // TREÐAIS UZDEVUMS
    int x;
    int y;
    int z = 0;
    int line = 1;
    cout<<"Ievadiet piramidas augstumu\n";
    cin>>x;
    for (x; x>0; x--){
        y = x;
        for(z,line; line>z; z++){
            cout<<"*";
        }
        z = 0;
        line++;
        cout<<endl;
    }
}
