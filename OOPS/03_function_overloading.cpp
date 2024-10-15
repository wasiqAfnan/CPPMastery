#include<iostream>
using namespace std;

float volume(int radius){
    return 3.14*radius*radius;
}

float volume(int length,int width){
    return length*width;
}

float volume(int length,int width,int height){
    return length*width*height;
}

int main(){
    int radius,r,len,wid,length,width,height;

    cout<<"Enter radius of a circle: ";
    cin>>radius;
    cout<<"the volume of radius is "<<volume(radius);

    cout<<"Enter length and width of a rectangle: ";
    cin>>len>>wid;
    cout<<"the volume of rectangle is "<<volume(len,wid);

    cout<<"Enter length,width and height of a triangle: ";
    cin>>length>>width>>height;
    cout<<"the volume of triangle is "<<volume(length,width,height);
}