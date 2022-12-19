#include <iostream>
using namespace std;
#include "math.h"


float f(float y){
    float risultato;
    risultato = pow(y, 2)* cos(y)+1;
    return risultato;
}



int main() {
    float a, b;

    do{
        cout << "inserire estremi" << endl;
        cin >> a >> b;
        }while(f(a)*f(b)>=0);
    float x, err;

    do{
        x=(a+b)/2;

        if(f(x)==0){
            cout<< x<< endl;
            cout << f(x);
            return 0;
        }
        else{
            if(f(a)*f(x)<0){
                b=x;
            }
            else {
                a=x;
            }
            err=abs((b-a)/2);
        }
  } while (err>=1e-6);
    cout<<int(x*10000)/10000.0<<endl;

    return 0;
}
