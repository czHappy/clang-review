#include <iostream>
using namespace std;

void func(){
    int*p = new int[10];
    p[0] = 1;
    p[1] = 2;
    for(int i=0; i<10; i++) cout<<p[i]<<endl;
}

int main(){
    func();
    return 0;
}