//WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"enter radius :\n";
    cin>>r;
    cout<<"enter height :\n";
    cin>>h;
    float vol;
    vol = 2*3.14*r*h;
    cout<<"Volume of cylinder is "<<vol;
    return 0;

}