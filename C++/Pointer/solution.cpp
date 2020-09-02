#include <iostream>
using namespace std;

int main() 
{
    int a, b, ans, ans2;
    cin >> a >> b;
    ans = a+b;
    if (a-b<0)
        ans2 = (a-b)*-1;
    if (a-b>0)
        ans2 = a-b;
    cout << ans << endl;
    cout << ans2;
    return 0;
}
