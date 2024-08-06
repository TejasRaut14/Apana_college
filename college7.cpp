#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of row";
    cin>>n;
    //int m;
    //cout<<"enter the value of column";
    //cin>>m;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
            
        }
        cout<<endl;
    }
}