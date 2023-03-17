#include <iostream>
using namespace std;

void square(int &n){
    n=n*n;
    cout<<n<<endl;
}
int main(){
int n;
cin >>n;
square(n);
cout<<n<<endl;
return 0;
}