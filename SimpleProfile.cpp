#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    string fullName;
    string favouriteMeal;
    string favouriteMovie;
    string reasonforClass;
    
    cout<< " Enter your fist Name: ";
    getline( cin, firstName);

    cout<< "Enter your last Name: ";
    getline( cin, lastName);

    cout<< " Enter your full Name: ";
    getline( cin, fullName);

    cout<< " Enter your favourite Meal: ";
    getline( cin, favouriteMeal);

    cout<< " Enter your favourite Movie: ";
    getline( cin, favouriteMovie);

    cout<< " Why are you in this class? ";
    getline( cin, reasonforClass);

   // Prepare profile info
   string line1 = " First Name: " + firstName;
   string line2 = " Last Name: " + lastName;
   string line3 = " Full Name: " + fullName;
   string line4 = " Favourite Meal: " + favouriteMeal;
   string line5 = " Favourite Movie: " + favouriteMovie;
   string line6 = " Reason for being in this class: " + reasonforClass;

   // Find trhe longest line to size the box 
   int maxLength = line1.length();
   string lines[] = {line1, line2, line3, line4, line5, line6};

   for (string line : lines) {
       if (line.length() > maxLength)
           maxLength = line.length();
   }

   // Print the box top boarder
   cout << "\n+" << string(maxLength + 2, '=') << " +\n";

   // Print title
   string title = fullName + " Profile ";
   int padding = (maxLength - title.length()) /2;
   cout << " | " << string(padding, ' ') << title
        << string(maxLength - title.length() - padding, ' ') << "|\n";

    // Separator line
    cout << " + " << std::string(maxLength + 2, '=') << " +\n";

    // Print profile details inside the box 
    for (string line : lines) {
        cout << " | " << line 
             << std::string( maxLength - line.length(), ' ') << " |\n";
    }

    // Print the bottom boarder
    cout << " + " <<string(maxLength + 2, '=' ) << "+\n";

    return 0;

} 
