#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[100],b[100],n;
    float s=0,s2=0;
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    for (int i=1; i<=n; i++)
        cin >> b[i];
    for (int i=1; i<=n; i++)
    {
        s+=a[i]*b[i];
        s2+=b[i];
    }
    cout << fixed << setprecision(1) << s/s2;
    return 0;
}
