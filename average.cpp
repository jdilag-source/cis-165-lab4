#include <iostream>
//i will be getting the average of 5 values in this program
int main()
{
    std::cout<<"Average of 5 values\n";
    double num1= 28;
    double num2= 32;
    double num3= 37;
    double num4= 24;
    double num5= 33;
    double sum= num1+num2+num3+num4+num5;
    double average= (num1+num2+num3+num4+num5)/5;
    std::cout<<"The sum of these numbers is "<<sum<<"\n";
    std::cout<<"The average of these numbers is "<<average<<"\n";

    return 0;
}
