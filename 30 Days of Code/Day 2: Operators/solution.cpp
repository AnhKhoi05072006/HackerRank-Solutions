#include <bits/stdc++.h>
using namespace std;
int main()
{
    double meal_cost;
    int tip_percent, tax_percent;
    cin >> meal_cost;
    cin >> tip_percent;
    cin >> tax_percent;
    cout<<round(meal_cost * tip_percent/100+ meal_cost * tax_percent/100+meal_cost);
    return 0;
}
