#include<iostream>
#include "Solution.h"
using namespace std;

int count (int n){
    int smalloutput=count(n);
    return ((n/100)+smalloutput)
}


int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}


