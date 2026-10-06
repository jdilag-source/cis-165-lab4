This is the new version of my average. This time using "sum/5" like you asked. 
Oh and this is my random numbers. I also changed the other calculation program in "average.cpp" using "sum/5"
#include <iostream>
//i will be getting the average of 5 values in this program
int main()
{
    std::cout<<"Average of 5 values\n";
    double num1= 25;
    double num2= 38;
    double num3= 39;
    double num4= 21;
    double num5= 36;
    double sum= num1+num2+num3+num4+num5;
    double average= sum/5;
    std::cout<<"The sum of these numbers is "<<sum<<"\n";
    std::cout<<"The average of these numbers is "<<average<<"\n";

    return 0;
}
The results for this program was 
-Average of 5 values
-The sum of these numbers is 159
-The average of these numbers is 31.8

Now for the ocean levels I just noticed I didn't really spell levels right. Sorry about that i'll change that right now. I was looking at it for a long time and I couldn't see what was wrong with it for a hot minute.

#include <iostream>
//in this program i will be calculating rising sea lvls throughout the years
int main()
{
    std::cout<<"Rising Sea Lvls\n";
    const double LEVEL= 1.5;
    double y1= 9;
    double y2= 11;
    double y3= 16;
    double rising1= y1*LEVEL;
    double rising2= y2*LEVEL;
    double rising3= y3*LEVEL;
    std::cout<<"The rising sea level for year 5 is "<<rising1<<"\n";
    std::cout<<"The rising sea level for year 7 is "<<rising2<<"\n";
    std::cout<<"The rising sea level for year 10 is "<<rising3<<"\n";
    

    return 0;
}
The results for these random numbers calculation are
Rising Sea Lvls
-The rising sea level for year 5 is 13.5
-The rising sea level for year 7 is 16.5
-The rising sea level for year 10 is 24
