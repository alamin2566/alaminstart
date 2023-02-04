#include<bits/stdc++.h>
using namespace std;
class Purchase
{
private:
 double discount,total_price;
public:
 void set_price(double x)
 {
 total_price = total_price + x;
 }
 double get_total_price()
 {
 return total_price;
 }
 double get_discont()
 {
 return discount;
 }
 void discount_5(double x)
 {
 discount=(5*x)/100;
 }
 void discount_10(double x)
 {
 discount=(10*x)/100;
 }
};
int main()
{
 Purchase s1;
 int temp;
 double total,dis;
 cout<<"Enter the price of the items bought"<<endl;
 for(int i=0;i<6;i++)
 {
 cin>>temp;
 s1.set_price(temp);
 }
 total=s1.get_total_price();
 if(total>=500){
 s1.discount_10(total);
 }
 else
 {
 s1.discount_5(total);
 }
 dis = s1.get_discont();
 cout<<endl;
 cout<<"Total purchase money: "<<total<<" tk"<<endl;
 cout<<"After discount: "<<total-dis<<" tk"<<endl;
 total=total-dis;
 cout<<"After purchase you got "<<1000.0-total<<" tk"<<endl;
 return 0;
}
