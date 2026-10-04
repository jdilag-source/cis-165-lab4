#include <iostream>
//in this program i will be calculating rising sea lvls throughout the years
int main()
{
    std::cout<<"Rising Sea Lvls\n";
    const double LEVEL= 1.5;
    double y1= 5;
    double y2= 7;
    double y3= 10;
    double rising1= y1*LEVEL;
    double rising2= y2*LEVEL;
    double rising3= y3*LEVEL;
    std::cout<<"The rising sea level for year 5 is "<<rising1<<"\n";
    std::cout<<"The rising sea level for year 7 is "<<rising2<<"\n";
    std::cout<<"The rising sea level for year 10 is "<<rising3<<"\n";
    

    return 0;
}
