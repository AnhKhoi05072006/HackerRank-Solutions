#include <iostream>
using namespace std;

int main() 
{
    int n,a[1000],i;
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    i = n;
    while (i != 0)
    {
        cout<<a[i]<<" ";
        i--;
    }   
    return 0;
}
