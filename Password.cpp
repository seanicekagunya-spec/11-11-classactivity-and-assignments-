#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string correctpassword = "321567" ;
    string input;
    int attempts = 0;

    while ( attempts < 3){
        cout << " Enter password: " ;
        cin >> input ;

        if ( input == correctpassword) {
            cout << " Access granted! " << endl;
            break ;
        } else {
            cout << " Wrong password " << endl;
            attempts++ ;
        }

    }
    if ( attempts == 3) {
        cout << " Password blocked " << endl;
    }
    return 0; 

}