#include<iostream>
using namespace std;

class Overload{
    int x;

    public:

    void takedata()
    {
        cout<<"Enter value of x";
            cin>>x;

    }

    void show()
    {
        cout<<"\nValue are"<<x;
    }

    Overload operator-(Overload yy)
    {
        Overload zz;
        zz.x = x - yy.x;

        return zz;
    }

};

int main()
{   Overload xx,yy,zz;

    xx.takedata();
    yy.takedata();
    zz=xx-yy;


    xx.show();
    yy.show();
    zz.show();


    return 0;
}