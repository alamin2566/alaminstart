#include<bits/stdc++.h>
using namespace std;
#define ll long long




class Football {
    float time{0};
 public:
    void setdata(int a) {
        time += a;
    }
    void showdata() {
        cout << time << endl;
    }
};

class Cricket {
    int runs{0};
 public:
    void setdata(int a) {
        runs += a;
    }
    void showdata() {
        cout << runs << endl;
    }
};

class sport: public Football, public Cricket {
    string accessories;
    int price{0};
 public:

};

class Trophy: public Football, public Cricket {
    int trophy_sales[4]{0};
 public:
    Trophy(int a, int b, int c, int d) {
        trophy_sales[0] = a;
        trophy_sales[1] = b;
        trophy_sales[2] = c;
        trophy_sales[3] = d;
    }
    void setdata(int a[]) {
        for (int i{0}; i < 12; i++) {
            trophy_sales[i%5] += a[i%5];
        }
    }
    void showdata() {
        for (int i{0}; i < 4; i++) {
            cout << trophy_sales[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Football f;
    Cricket c;
    Trophy t(1, 2, 3, 4);
    t.showdata();
    c.setdata(10);
    c.showdata();
    f.setdata(20);
    f.showdata();
    return 0;
}
