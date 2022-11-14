#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, koordinates[2];

    cout<<"===TIKLA NO 0 UN 1 VEIDOTAJS==="<<endl;
    cout<<"Ierakstiet x koordinates"<<endl;
    cin>>a;
    cout<<"Ierakstiet y koordinates"<<endl;
    cin>>b;
    koordinates[0] = sqrt(b*b);//Y koordinâtes
    koordinates[1] = sqrt(a*a);//X koordinâtes
    for (int i = 0; i < koordinates[0]; i++){
        for(int k = 0; k < koordinates[1]; k++){
            if(i % 2 == 0){
                if(k % 2 == 0){cout<<"0";}
                else {cout<<"1";}
            } else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
}
