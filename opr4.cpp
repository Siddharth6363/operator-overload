#include<iostream>        //DECREMENT BY PREFIX OPERATOR
using namespace std;

class Yo{
    public:
    int a;

   
        void getdata()
        {
            cout<<"Enter value of a :";
                cin>>a;
        }

            void putdata()
            {
               cout<<a; 
            }

                void operator--()
                {
                    a=a-1;
                    
                }
};

int main()
{   
        Yo aa;
            aa.getdata();   //to get the value of aa to increment
              cout<<"Original value before decrementing is:";
                aa.putdata();
                cout<<"---------------'\n'\n";
                    --aa;        // 
                    cout<<"Value after decrementing is:\n";
                    aa.putdata();
 return 0;
}