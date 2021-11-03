#include <iostream>

using namespace std;

class complex{
    private:
    int a,b;
    public:
    void set_data(int x,int y){
        a=x;b=y;
    }
    void show_data(){
        cout<<a<<" "<<b<<endl;
    }
    int geta(){
        return a;
    }
    int getb(){
        return b;
    }
};

class number{
    private:
    int m,n;
    public:
    number() {}
    number(complex c){
        m = c.geta();
        n = c.getb();
    }
    void show_data(){
        cout<<m<<" "<<n;
    }
};

int main()
{
    complex c;
    number n;
    c.set_data(33,44);
    c.show_data();
    n = c;
    n.show_data();

    return 0;
}
