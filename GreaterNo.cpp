//Greater no. among three different numbers
#include<iostream>
using namespace std;
int main() {
    int x;
    int y;
    int z;
    x=10;
    y=30;
    z=15;

    if(x>y && x>>z){
    cout<<"X is greter no. among them"<<endl;
    }
    else if(y>x && y>z){
        cout<<"Y is the greater no. among them"<<endl;
    }
    else if(z>x && z>y){
        cout<<"Z is the greatest no. among them"<<endl;
    }
    else {
        cout<<"no statement is true"<<endl;
    }

    return 0;
}