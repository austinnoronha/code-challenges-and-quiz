#include <iostream>
using namespace std;

int main()
{
    int result = 0;
    int no = 3, pw = 3;
    cout << "# A program to find the power-of a given number ?" << endl;
    result = pow(no, pw);
    cout << "Number:" << no << ", to the power-of:" << pw << " = " << result << endl;
    return 0;
}
