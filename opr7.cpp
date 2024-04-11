#include<iostream>
using namespace std;

    class demo{
        int a;

        public:
            void getdata()
            {
                cout<<"Enter value of a:";
                        cin>>a;
            }

            void putdata()
            {
                    cout<<a;
            }

            void operator=(demo bb)
            {
              a=bb.a;
            }


    };

int main()
{      demo aa;
            demo bb;

                bb.getdata(); //hume b ki value a me dalni hai

                    aa=bb;  //opr overloading ko call kia aa k zariye
                
                cout<<"Value of a which is copied from b is:";
                            aa.putdata();

                            cout<<"\nValue of b is:";
                            bb.putdata();
    

    return 0;
}