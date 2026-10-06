# cis-165-lab4
Im proud of myself I finished this lab without using ai this time. I did use the internet to find out how to use constant though, but at least not ai. I don't mind using ai but I wanted to do this assignment without using it. So that I can learn how program the basics by myself.

OKAY

so for the average. we needed to use double because the answers would most like have a decimal and if we had used integer it would have rounded it out and we dont want that. 
The average calculation had to be divided by the completed sum and not the final value is because we needed to find the average value for all the values not just the final one.

Now for the ocean lvls program is calculated by multiplying 1.5 to however many years. So for year 5 the calculation would be 5 times 1.5.
The annual lvl rate is a good candidate because its a number that doesn't change which is basically a constant.
We need to store calculations in cout because you usually want to use the result more thamn once and cout just prints a value.

I will add the things I changed down here.

This is the new version of my average. This time using "sum/5" like you asked. 
I also changed the other calculation program in "average.cpp" using "sum/5"
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
