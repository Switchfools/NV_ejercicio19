//
//  Diff.cpp
//  
//
//  Created by Nicolas Felipe Vergara Duran on 12/04/18.
//

#include <iostream>
#include <cstdlib>
using namespace std;
float f(float x, float y){
    return(-y);
}
int main(){
    float k1;
    float k2;
    float k3;
    float k4;
    
    float h=0.01;
    float min_x = 0.0;
    float max_x = 10.0;
    float y=1;
    float x=0;
    int n = (max_x - min_x)/h;
    for(int i =0;i<n;i++){
        k1=f(x,y);
        k2=f(x+h/2,y+((h/2)*k1));
        k3=f(x+h/2,y+((h/2)*k2));
        k4=f(x+h,y+((h/2)*k3));
        y=y+((h/6)*(k1+2*k2+2*k3+k4));
        x=x+h;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
