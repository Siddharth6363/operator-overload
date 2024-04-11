#include<iostream>
using namespace std;     //postfix

class Rose{
    int a;

            public:
        void getdata(){
                cout<<"Enter value of a: ";
                        cin>>a;
        }
            void putdata()
            {
                cout<<a;
            }

            void operator--(int)
            {
                a=a-1;
            }
        

};

int main()
{           Rose r1;
                r1.getdata();

                    cout<<"Value before decrementing was: ";
                        r1.putdata();

                            r1--;

                        cout<<"\nValue after decremting is: ";
                            r1.putdata();


    return 0;
}