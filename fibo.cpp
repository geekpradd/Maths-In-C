#include <iostream>
#include  <string>
#include <vector>
#include "maths.h"
using namespace std;

vector<int> fibonacci(int largest){
    vector<int> r;
    int a=1;
    int b=1;
    while (a<=largest&&b<=largest){
        r.push_back(a);
        r.push_back(b);
        a = a+b;
        b = a+b;

    }
    return r;
}
int main(){
    vector<int> fibos = fibonacci(90);
    printVector(fibos);

}
