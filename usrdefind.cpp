// Single File Programming Question
// Problem Statement



// Sharukh needs to calculate the distance and midpoint of a line segment given its endpoints. Write a program to help Sharukh that reads the coordinates of two endpoints of a line segment, computes the distance between them, and finds the midpoint of the segment. 

// Input format :
// The first line contains the coordinates of the first endpoint as integers represented as x1 and y1.

// The second line contains the coordinates of the second endpoint as integers represented as x2 and y2.

// Output format :
// The first line prints "Distance: " followed by the distance between the two points, as a float value rounded to two decimal places.

// The second line prints"Midpoint: " followed by the midpoint coordinates, as float values rounded to two decimal places.



// Refer to the sample output for the exact format.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 0 ≤ x1, y1, x2, y2 ≤ 104

// Sample test cases :
// Input 1 :
// 1 1
// 2 2
// Output 1 :
// Distance: 1.41
// Midpoint: 1.50 1.50
// Input 2 :
// 3 2
// 4 1
// Output 2 :
// Distance: 1.41
// Midpoint: 3.50 1.50
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Distance{
        public:
            struct point{
                float x;
                float y;
            };
            void displaydetails(point p1,point p2)
            {
                float dis =sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
                float m1=(p2.x+p1.x)/2;
                float m2=(p2.y+p1.y)/2;
                cout<<fixed << setprecision(2);
                cout<<"Distance: " <<dis<<endl;
                cout<<"Midpoint: "<<m1<<" "<<m2<<endl;
            }
};
int main()
{
    Distance::point p1,p2;
    cin>>p1.x>>p1.y;
    cin>>p2.x>>p2.y;
    Distance dist;
    dist.displaydetails(p1,p2);
    
    
}