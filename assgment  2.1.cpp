#include<iostream>
#include<vector>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize() ios_base::sync_with_stdio(0); cin.tie(); cout.tie();


int display(vector<int> &v){

		vector<int>v1;
		v1=v;
		for (auto it=v1.begin();it!=v1.end();it++)
		cout<<*it<<" ";
		cout<<endl;
}
int main()
{
	optimize();
	cout<<"Make your choice\n1.to input a number\n2.to delete the last inserted element\n3.to display all the values\nto end the program\n\n";
	vector<int>v;
	while(1){

	cout<<"Enter your choice :  ";
	int n;cin>>n;
	if (n==1)
	{
		int a;cin>>a;
		if (v.size()>15)
		{
			cout<<"No empty space\n";
			display(v);
		}
		else v.push_back(a);
	}
	else if (n==2)
	{
		v.pop_back();
	}
	else if (n==3)
	{
		display(v);
	}
	else return 0;


	}

}
