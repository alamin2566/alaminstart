#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int l=max(l1,l2);//Taking maximum of both L
    int r=min(r1,r2);//Taking minimum of both R
    if(l>r) //If l>r that means one interval started and ended before another interval and there is no common point
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<l<<" "<<r<<"\n"; // There is common point
    }
    return 0;
}
