#include <iostream>
using namespace std;

class Phone{
private:
    string p_name;
    string p_size;
public : 
    Phone(string name,string size){
        p_name=name;
        p_size=size;
    }
void makecall(){
    cout << "Making call using " <<p_name <<endl;
}
void recievecall(){
    cout << "Recieving Call Using" <<p_name <<endl;

}
int main(){
   Phone phone1("iphone10","124");
   phone1.makecall();
   phone1.recievecall();
   return 0;
}