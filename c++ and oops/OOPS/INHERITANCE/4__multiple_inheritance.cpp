#include<bits/stdc++.h>

using namespace std;

class A {
    protected :  // when make private it is inaccessible
        int a;
    public :
        int get_a (int n)
        {
            a = n;
        } 
};



class B {

    protected:
        int b ;
    public :
        void get_b(int n)
        {
            b = n;
        }


};



class C : public A , public B {
    public:  
    void display()  
    {  
  
        std::cout << "The value of a is : " << a<< std::endl;  
        std::cout << "The value of b is : " <<b<< std::endl;  
        cout<<"Addition of a and b is : "<<a+b;  
    }  
};




int main()
{

   C c;  
   c.a = 12;  // inaccessible
    c.get_a(10);  
   c.get_b(20);  
   c.display();  
}