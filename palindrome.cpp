#include <iostream>
using namespace std;

bool ispalindrome(int num,int &revnum){
    if (num == 0){
        return true;
    }
    if (ispalindrome(num/10,revNum)&&(num % 10 == revNum % 10))
    revNum /=10;
    return true;
} else {
    return false;
}

int main(){
    int num,original
}