#include<iostream>
using namespace std;      //INCREMENT BY POSTFIX OPR

class Yo{
    int x;


    public:
        void getdata()
        {
            cout<<"Enter value of x";
                cin>>x;
        }

            void putdata()
            {
                cout<<x;
            }

                void operator++(int)
                {
                    x=x+1;
                }

};

int main()
{       Yo s1;
            s1.getdata();
            cout<<"Original value before incrementing is: ";
                s1.putdata();

                    s1++;

                cout<<"\nValue are incrementing is: ";
                    s1.putdata();


   return 0; 
}