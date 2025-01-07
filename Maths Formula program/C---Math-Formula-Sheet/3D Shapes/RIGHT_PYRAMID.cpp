#include<iostream>
using namespace std;

//RIGHT PYRAMID
 //Lateral Surface Area
   int lsa(int bp, int sh){
      return(0.5*bp*sh);
    }
 //Total Surface Area
    int tsa(int ba, int bp, int sh){
        return(0.5*bp*sh*ba);
    }

    int main(){
    int bp; int sh; int ba;
    cout<<"Enter Base perimeter of the right pyramid"<<endl;
    cin>>bp;
    cout<<"Enter the slant height of the right pyramid"<<endl;
    cin>>sh;
    cout<<"Enter the base area of the right pyramid"<<endl;
    cin>>ba;
    cout<<"The Lateral Surface Area of the Right Pyramid as per the givenbase perimeter and the slant height is "<<lsa(bp,sh)<<endl;
    cout<<"The Total Surface Area of the Right Pyramid as per the givenbase perimeter, base area and the slant height is "<<tsa(bp,sh,ba)<<endl;
    
    return 0;
}