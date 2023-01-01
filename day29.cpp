#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
      complex();
      void print(){
        cout<<"the complex number is: "<<a<<" + i"<<b;
      }
};
complex :: complex(){
    a=10;
    b=2;
}
int main() {
    complex c1;
    c1.print();
    return 0;
}