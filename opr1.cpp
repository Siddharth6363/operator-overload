#include<iostream>
using namespace std;

class demo{
    int a;
    public:
        void getdata()
        {
            cout<<"Enter a value";
                cin>>a;
        }

        void putdata()
        {
            cout<<"\nValue is"<<a;
        }


        demo operator+(demo bb)                                          //demo return type chaiye hume
        {
            demo cc;
            cc.a=a+bb.a; 
            return cc;
        }

};

int main()
{       

    demo aa,bb,cc;
        aa.getdata();
            bb.getdata();
                cc=aa+bb;     //calling of operator overloading

                    aa.putdata();
                        bb.putdata();
                            cc.putdata();
    

    
    return 0;
}