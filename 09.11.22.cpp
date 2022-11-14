#include <iostream>
#include <cmath>
using namespace std;

class rectangle {
public:
    int edge1;
    int edge2;
    int perimeter = (edge1 + edge2) * 2;
    int area = edge1 * edge2;

    void perimeterCalc(){
        perimeter = (edge1 + edge2) * 2;
        if (perimeter > 2147483646 || perimeter < 0){cout<<"\nTaisnstura perimetrs ir lielaks par 2147483647 vienibam.\nMums nesanaca aprekinat :(\n";}
        else {cout<<"\nTaisnstura perimetrs ir "<<perimeter<<" vienibas\n";}
    }
    void areaCalc(){
        area = edge1 * edge2;
        if (area > 2147483646 || area < 0){cout<<"\nTaisnstura laukums ir lielaks par 2147483647 vienibam.\n Mums nesanaca aprekinat :(\n";}
        else {cout<<"\nTaisnstura laukums ir "<<area<<" vienibas\n";}
    }
};
class triangle: public rectangle{
    public:
    int edge3;
    int s = perimeter / 2;
    int perimeter = edge1 + edge2 + edge3;
    int area = sqrt(abs(s * (s - edge1) * (s - edge2) * (s - edge3)));

};

int main(){
    rectangle rectangle1;
    cout<<"Ievadiet taisnstura kadas malas garumu"<<endl;
    cin>>rectangle1.edge1;
    while (rectangle1.edge1 < 0){
        cout<<"Negativs malas garums? Fatala kluda!\nIevadi no jauna!"<<endl;
        cin>>rectangle1.edge1;
    }
    cout<<"Ievadiet perpendikularas malas garumu"<<endl;
    cin>>rectangle1.edge2;
    while (rectangle1.edge2 < 0){
        cout<<"Negativs malas garums? Fatala kluda!\nIevadi no jauna!"<<endl;
        cin>>rectangle1.edge2;
    }
    rectangle1.perimeterCalc();
    rectangle1.areaCalc();
}
