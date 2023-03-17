#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class labs {
public:
	string labname;
	void printname() 
	{ cout << "Labname is:" << labname; }
};
int main()
{
	labs obj1;
	obj1.labname = "Abhi";
	obj1.printname();
	return 0;
}