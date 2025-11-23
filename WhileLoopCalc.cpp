#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int start = 20 ;
    int sum = 0 ; // This is the empty bucket to store the total 

    while ( start <=25) {
        sum = sum + start;
        start++; // Move to the next number 
    }
    cout << " The sum of numbers from 20 to 25 is: " << sum << endl;

    return 0; 
}