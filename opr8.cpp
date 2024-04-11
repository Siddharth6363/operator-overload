#include<iostream>
using namespace std;

class demo{
        int a;

        public:
        void getdata()
        {
            cout<<"Enter value of a: ";
                    cin>>a;
        }

        void putdata()
        {
            cout<<a;
        }

        void operator+=(demo b1)
        {
                a=a+b1.a;
        }


};

int main()
{       demo a1,b1;

        a1.getdata();
        b1.getdata();

        a1.putdata();
        cout<<"\t";
        b1.putdata();

        cout<<'\n';

        a1+=b1;
        cout<<"------------\n";
        cout<<"   ";
        a1.putdata();  //   q ki final value toh a me store hua haina!!!!

    return 0;
}