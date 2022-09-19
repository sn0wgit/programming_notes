#include <iostream>
using namespace std;

int main() {
    int x[3] = {9, 9, 6};
    if (x[0] == x[1] == x[2]) {cout<<"Visi skaitli ir vienadi ("<<x[0]<<")";} else {
        if (x[0] == x[1] || x[1] == x[2] || x[2] == x[0]){
            if(x[0] == x[1]){
                if (x[0] > x[2]) {cout<<"Pirmais un otrais skaitli ("<<x[0]<<") ir vienadi un ir lielaki par treso ("<<x[2]<<")";}
                else {cout<<"Pirmais un otrais skaitli ("<<x[0]<<") ir vienadi un ir mazaki par treso ("<<x[2]<<")";}
            }
            if (x[1] == x[2]) {
                if (x[1] > x[0]) {cout<<"Otrais un tresais skaitli ("<<x[1]<<") ir vienadi un ir lielaki par pirmo("<<x[0]<<")";}
                else {cout<<"Otrais un tresais skaitli ("<<x[1]<<") ir vienadi un ir mazaki par pirmo("<<x[0]<<")";}
            } else {
                if (x[0] > x[1]) {cout<<"Pirmas un tresais skaitli ("<<x[0]<<") ir vienadi un ir lielaki par otro("<<x[1]<<")";}
                else {cout<<"Pirmas un tresais skaitli ("<<x[0]<<") ir vienadi un ir mazaki par otro("<<x[1]<<")";}
            }
        } else {
            if (x[0] > x[1] && x[0] > x[2]) {
                /*pirmais skaitlis ir lielaks*/
            }
            else if (x[1] > x[2] && x[1] > x[0]) {
                /*otrais skaitlis ir lielaks*/
            }
            else {
                /*tresais skaitlis ir lielaks*/
            }
        }
    }
}
