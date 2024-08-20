// Single File Programming Question
// Problem Statement



// Guna wants to write a program that counts the number of occurrences of a specific character in a given string. 



// He decided to create a class called Occurrence to handle this task. In the class, a string and character are its private attributes. Initialize the variables using a member function. Define a member function countOccurrence() to count the number of times the character occurs in the string.



// Note: This is a sample question asked in a Capgemini interview.

// Input format :
// The first line of input consists of a string, str.

// The second line of input consists of a single character, ch, which represents the character to be counted for its occurrence in the string.

// Output format :
// The output displays a single integer representing the count of occurrences of the character ch in the given input string str.

// Code constraints :
// Use the small-case alphabet (a–z), numbers, and special characters.

// Sample test cases :
// Input 1 :
// utter
// t
// Output 1 :
// 2
// Input 2 :
// 453vgft
// 5
// Output 2 :
// 1
// Input 3 :
// ftf@fdfd@
// @
// Output 3 :
// 2
#include<iostream>
using namespace std;
class occurance{
    private:
        string s;
        char a;
    public:
        void g(string n,char x)
        {
            n=s;
            getline(cin,n);
            int t=n.length();
            x=a;
            cin>>x;
            int count=0;
            for(int i=0;i<t;i++)
            {
                if(n[i]==x)
                {
                    count++;
                }
            }
            cout<<"count is "<<count;
        }
};
        
int main()
{   string r;
    char t;
    occurance obj;
    obj.g(r,t);
}