// Character to ASCII Converter
// Demonstrates character and ASCII value conversion

#include<iostream>
using namespace std;

int main(void)
{
   char letter;
   
   cout << "Enter a character: ";
   cin >> letter;
   
   cout << "The ASCII value of '" << letter << "' is: " << (int)letter << endl;
   
   return 0;
}
