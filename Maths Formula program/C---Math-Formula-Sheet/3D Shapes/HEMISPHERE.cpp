#include<iostream>
using namespace std;

//HEMISPHERE
//LATERAL SURFACE AREA
int lsa(int r){
    return(2*3.14*r*r);
}

int main(){
    int r;
    cout<<"Enter the radius of hemisphere"<<endl;
    cin>>r;
    cout<<"The lateral surface area of hemisphere is:"<<lsa(r)<<endl;
    return 0;
}