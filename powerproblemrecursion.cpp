#include <iostream>
using namespace std;

int power (int x,int n){
   if (n==1){
    return x;
 }
 power=x^n;
 int smalloutput=power(x,n-1);
 return  x*smalloutput;
}
int main(){
    int n;
    int x;
    cin >> x;
    cin >> n;
    int output = power(x,n);
    cout << output <<endl;
}