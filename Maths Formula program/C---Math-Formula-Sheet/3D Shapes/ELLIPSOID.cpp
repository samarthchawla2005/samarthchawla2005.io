#include<iostream>
using namespace std;

//ELLIPSOID
//TOTAL SURFACE AREA
int tsa(int a, int b, int Ee){
    return(4*3.14*a*b*Ee);
}


int main(){
    int a; int b; int Ee;
    cout<<"Enter length 'a' of semi major axis"<<endl;
    cin>>a;
    cout<<"Enter length 'b' of semi major axis"<<endl;
    cin>>b;
    cout<<"Enter elliptic integral 'E(e)' of semi major axis"<<endl;
    cin>>Ee;
    cout<<"The total surface area of ellipsoid is: "<<tsa(a,b,Ee)<<endl;
    return 0;
}