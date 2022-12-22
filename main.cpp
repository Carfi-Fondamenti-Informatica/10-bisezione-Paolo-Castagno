
#include <iostream>
#include <cmath>
using namespace std;

float val (float x){
    return (x*x)* cos(x)+1;
}

int main() {
    float a,b,x,err=1; 
    
    do{
        cout<<"inserire estremi";
        cin >> a >> b ;
    } while (val(a)*val(b)>=0);

    do {
        x=(a+b)/2;
        if (val (a)==0){
            break;
        } else {
            if (val (a)*(b)<0){
                b=x;
            } else {
                a=x;
            }
            err=fabs((b-a)/2);
        
        }
    } while (err>=(1e-6));   
        
    x=x*10000;
        x=(int)x;
        cout <<x<<endl;
        cout<< val (x);
}
