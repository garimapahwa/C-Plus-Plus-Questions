#include <iostream>
using namespace std;

int main()
{
    int arr[50],n,temp,i,j;
    cout << "enter numbers" <<endl;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for (i=0,j=n-1;i<n/2;i++,j--)
    {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(i=0;i<n;i++){
        cout << arr[i]<<endl;
    }
    return 0;

}