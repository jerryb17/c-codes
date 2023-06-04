#include<iostream> 
using namespace std; 

class test
{
    static int i; //static function is used
public:
    static int getValue() 
    { return i; 
    } // static member function is used
};
 
int test::i{ 10 };
 
int main()
{
    std::cout << "Value is : " << test::getValue() << '\n';
}