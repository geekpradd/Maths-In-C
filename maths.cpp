#include <iostream>
#include <sstream>
#include  <string>
#include <vector>
using namespace std;

string toString(int a){
    ostringstream g;
    g << a;
    return g.str();
}
void printVector(vector<int> v){

    string output = "{";
    for (int i=0;i<v.size();i++){
        ostringstream a;
        a << v[i];
        if (i==(v.size()-1)){
            output += a.str() +"}";
        }
        else{
             output += a.str() + ", ";
        }
    }
    cout <<output<<endl;
}
vector<int> Factors(int num){
    vector<int> f;
    for (int i=1;i<=num;++i){
        if (num%i==0){
            f.push_back(i);
        }
    }
    return f;
}
bool isprime(int num){
    if (Factors(num).size()==2){
        return true;
    }
    else{
        return false;
    }
}
