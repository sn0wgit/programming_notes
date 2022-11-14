#include <iostream>
#include <string>
using namespace std;

/*int main(){
    string x = "10";
    string* ptr = &x;
    cout<<x<<endl<<&x<<endl<<ptr<<endl<<*ptr;
}*/

/*void obmen (int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main () {
    int x = 10, y = 5;
    cout<<"X vienads ar "<<x<<", bet y vienads ar "<<y<<endl;
    obmen(x, y);
    cout<<"X tagad vienads ar "<<x<<", bet y vienads ar"<<y;
} */
struct node{
    int data;
    node* next;
};

int main() {
    //Декларирование
    node* head;
    node* one    = new node;
    node* two    = new node;
    node* three  = new node;
    node* four   = new node;
    node* five   = new node;
    node* tails;
    //Присвоение значений
    int temp, i = 1;
    for (i; i < 6; i++) {
        cout<<"Ievadiet "<<i<<". skaitli\n";
        cin>>temp;
        if (i == 1) {
            one->data = temp;
        }
        if (i == 2) {
            two->data = temp;
        }
        if (i == 3) {
            three->data = temp;
        }
        if (i == 4) {
            four->data = temp;
        }
        if (i == 5) {
            five->data = temp;
        }
    }
    //Соединение
    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;
    tails = five;
    //Тестирование
    cout<<"Head     "<<head<<endl;
    cout<<"One    "<<one->data<<" "<<one<<endl;
    cout<<"Two    "<<two->data<<" "<<two<<endl;
    cout<<"Three  "<<three->data<<" "<<three<<endl;
    cout<<"Four   "<<four->data<<" "<<three<<endl;
    cout<<"Five   "<<five->data<<" "<<three<<endl;
    cout<<"Tails    "<<tails;
}
