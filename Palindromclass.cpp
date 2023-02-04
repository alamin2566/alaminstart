#include<bits/stdc++.h>
using namespace std;
class Palindrome
{
    string ch;
    public:
    void getValue()
    {
        cin>>ch;
    }
    void checkPalindrome(Palindrome p1)
    {
        string temp = p1.ch;
        int i,j;
        for(i=0, j=ch.size()-1; j>=0; j--, i++)
        {
            temp[i] = ch[j];
        }
        temp[i] = '\0';
        if(temp == ch)
        {
            cout<<"Palindrome"<<"\n";
        }
        else
        {
            cout<<"Not Palindrome"<<"\n";
        }
    }

};
int main()
{
    Palindrome s1;
    s1.getValue();
    s1.checkPalindrome(s1);
}
