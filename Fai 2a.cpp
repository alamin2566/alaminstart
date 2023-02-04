#include<iostream>
using namespace std;
class sports
{
private:
    string title;
    float price;
    public:
    sports(string title,float price)
    {
    	this->title=title;
    	this->price=price;
    }
    void setvalue(string title,float price)
    {

        this->title =title;
        this->price=price;
    }
    string gettitle()
    {
        return title;
    }
    float getprice()
    {
       return price;
    }


        void showdata()
        {
            cout<<"title : "<<title<<endl;
            cout<<"price: "<<price<<endl;
        }
        };
        class cricket:public sports
        {
        private:
            int run;
        public:
            cricket(string title,float price,int run): sports(title,price)
            {
                this->run=run;
            }


            void setrun(int run)
            {
                this->run=run;
            }
            int getrun()
            {
                return run;
            }




void showdata_cricket()
{

    sports:showdata();
    cout<<"run:"<<run<<endl;
}
        };
class Football:public sports
{

private:
    float miniutes;
public:

Football(string title,float price,float miniutes): sports(title,price)
{
    this->miniutes=miniutes;
}

    void setvalue(float miniutes)
    {

        this->miniutes=miniutes;
    }

    float getminiutes()
    {
        return miniutes;
    }
    void showdata_Football()
    {

        sports:showdata();
        cout<<"miniutes:"<<miniutes<<endl;

    }
};
    int main(){
        cout<<"cricket"<<endl;
        cricket C1("cricket ",50,500.6);
        C1.showdata_cricket();

        cout<<"Football"<<endl;
        Football f1("Football",600.5,300.5);
        f1.showdata_Football();

        return 0;

    }
