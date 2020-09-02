#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a[100];
    float avg,ans,s=0;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        s+=a[i];
    avg = s/n;
    s = 0;
    for (int i=0; i<n; i++) 
        s+=(a[i]-avg)*(a[i]-avg);
    ans = sqrt(s/n);
    cout<<fixed<<setprecision(1)<<ans;
    return 0;
}
