#include <iostream>
#include <cmath>
using namespace std;


float f(float y){
    return (y*y)*cos(y)+1;
}

int main() {
       float a=0;
    float b=0;
    cout<<"Inserire estremo"<<endl;
    cin>>a>>b;
    while((a-b)/2>0.0001){
        float m=(a+b)/2;
        if(f(m)==0){
            a=m;
            b=m;
        }
        else{
            if(f(m)<0) {
                a = m;
            }
            else{
                b=m;
            }
        }
    }
    cout<<(a+b)/2<<endl;
}
   return 0;
}
