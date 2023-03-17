#include <iostream>
using namespace std;

void change(int n){
    n=n*n; 
    cout << n;
}
int main(){
 int n;
 cin >> n ;
 change(n);
 cout <<n;
 return 0;
}