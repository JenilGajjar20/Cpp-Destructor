#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "Constructor is called and Value of count is: " << count << "\n";
    }

    ~num()
    {
        cout << "Destructor is called and Value of count is: " << count << "\n";
        count--;
    }
};

int main()
{
    cout << "Main function starts.\n";
    cout << "First object created.\n";
    num n1; // n1 is an object of class num
    {
        cout << "Block starts here.\n";
        cout << "Second and Third object created.\n";
        num n2, n3; // n2 and n3 are the object of class num
        cout << "Block ends here.\n";
    }
    cout << "Main function ends.\n";
    return 0;
}