#include <iostream>
using namespace std;

int main(){
  int repeater; // Priekš atkârtoðanas
  int x, y; // Priekš darbîbas
  bool notequal; // Ja skaitïi sakrît
  bool whoisbigger; // Lai salîdzinât skaitïus true: x, false: y
  int lielakais;
  int mazakais;
  int i = 0;
  cout<<"=========KOPIGO DALITAJU MEKLETAJS=========\n";
  cout<<"Ievadiet pirmo skaitli\n";
  cin>>x;
  cout<<"Ievadiet otro skaitli\n";
  cin>>y;
  if (x == y){notequal = false;} else {
    notequal = true;
    if (x > y) {mazakais = y;lielakais = x;}
    else {mazakais =  x;lielakais = y;}
  }
  //cout<<notequal;
  //cout<<"Lielakais ir "<<lielakais<<endl;
  //cout<<"\nSiem skaitliem ir sekojosie kopigie dalitaji: ";
  if (notequal ==  false) {
    while (i < x){
      i++;
      int kopdal = i;
      if (x % kopdal == 0){cout<<kopdal<<" ";}
    }
  }
  if (notequal == true) {
    while (i <= mazakais){
      i++;
      if (lielakais % i == 0){
        if (mazakais % i == 0){cout<<i<<" ";}
      }
    }
  }
  cout<<"\nVai jus gribat atkartot operaciju no jauna?\nYes [0] No [1]\n";
  cin>>repeater;
  if (repeater == 0) {main();}
}
