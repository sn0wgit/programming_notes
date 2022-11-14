#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, a, b, c;
    cout<<"Ievadiet skaitli N\n";
    cin>>n;
    cout<<"Ja a <= b <= c <= n,\ntad 'a', 'b' un 'c' skaitlu grupas bus sekojosas:\n\n";
    for(int x = 0; x <= n; x++){
        a = x;
        for(int y = 0; y <= n; y++){
            b = y;
            if (a <= b){
                for(int z = 0; z <= n; z++) {
                    c = z;
                    if (b <= c){
                        if (a*a + b*b == c*c){
                            cout<<a<<" "<<b<<" "<<c<<endl;
                        }
                    }
                }
            }
        }
    }
}
