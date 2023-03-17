#include <iostream>
using namespace std;

int count (int n){
    int ans = 0;
    if (n!=0){
        ans++;
        count(n/10);
    }
    return ans;
}
int main(){
    int n ;
    cin>>n;
    int result=count(n);
    cout<<result<<endl;
}

