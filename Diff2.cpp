//
//  Diff.cpp
//  
//
//  Created by Nicolas Felipe Vergara Duran on 12/04/18.
//

#include <iostream>
#include <cstdlib>
using namespace std;
float f(float z,float y, float x){
    return(z);
}
float g(float z,float y, float x){
    return(-y);
}
int main(){
    float k1;
    float k2;
    float k3;
    float k4;
    float p1;
    float p2;
    float p3;
    float p4;
    float h=0.01;
    float min_x = 0;
    float max_x = 10.0;
    float y_old=1;
    float y_new=1;
    float x=0;
    float z_old=0;
    float z_new=0;
    int n = (max_x - min_x)/h;

    for(int i =0;i<n;i++){
        k1=f(z_old,y_old,x);
        k2=f(z_old+((h/2)*k1),y_old+((h/2)*k1),x+h/2);
        k3=f(z_old+((h/2)*k2),y_old+((h/2)*k2),x+h/2);
        k4=f(z_old+((h/2)*k3),y_old+((h/2)*k3),x+h);
        p1=g(z_old,y_old,x);
        p2=g(z_old,y_old+((h/2)*k1),x+h/2);
        p3=g(z_old,y_old+((h/2)*k2),x+h/2);
        p4=g(z_old,y_old+((h/2)*k3),x+h);
        z_new=z_old+((h/6)*(p1+2*p2+2*p3+p4));
        y_new=y_old+((h/6)*(k1+2*k2+2*k3+k4));
        x=x+h;
             cout<<x<<" "<<y_new<<" "<<z_new<<endl;
             z_old=z_new;
             y_old=y_new;
    }
    return 0;
}
