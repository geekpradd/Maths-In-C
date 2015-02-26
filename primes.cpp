#include <iostream>
#include  <string>
#include <vector>
#include "maths.h"
using namespace std;

vector<int> primeFactors(vector<int> f){
    vector<int> r;
    for (int i=0;i<f.size();++i){
        if (isprime(f[i])){
            r.push_back(f[i]);
        }
    }
    return r;
}
vector<int> primeFactors(int a){
    vector<int> r;
    vector<int> f = Factors(a);
    for (int i=0;i<f.size();++i){
        if (isprime(f[i])){
            r.push_back(f[i]);
        }
    }
    return r;
}
string primeFactorize(int num){
    vector<int> factors = primeFactors(num);
    if (isprime(num)){
        return toString(num);
    }
    else{
        return toString(factors[0])+"*"+primeFactorize(num/factors[0]);
    }
}
int main()
{
    cout << "Welcome to Prime Factorizer.. Keep entering your numbers to prime factorize or enter -1 to quit" << endl;
    int num=0;
    cout << "Enter the numbers below"<<endl;
    while (num!=-1){
        if (num!=0){
            cout << primeFactorize(num)<<endl;
        }
        cout << ">>>";
        cin >> num;

    }


    return 0;
}
