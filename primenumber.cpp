#include <iostream>
using namespace std;
int main(){
    int i;
    int n;
    bool prime = true;
     cin >> n;
if (n==0 || n==1){
    prime = false ;
}
for (i=2;i<=n/2;i++){
    if (n%i==0){
        prime = false;
        break;
    }
}
if (prime)
    cout << "Number is Prime";
    else
    cout << "Number is not Prime";
    return 0;
}