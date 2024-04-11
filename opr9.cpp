#include<iostream>
using namespace std;

class Img{
    int r,i;

    public:
        void getdata()
        {
            cout<<"Enter real and imaginary numbers: ";
                    cin>>r>>i;
        }

            void putdata()
            {
                cout<<'\n'<<r<<" + "<<i<<"i";
            }

            Img operator+(Img b1)
            {
                Img c1;
                c1.r=r+b1.r;
                c1.i=i+b1.i;
                return c1;
            }

};

int main()
{       Img a1,b1,c1;
            a1.getdata();
            b1.getdata();

            c1=a1+b1;

            a1.putdata();
            b1.putdata();
            c1.putdata();
            return 0;

    return 0;
}