// CalculatorSwitch.cc
// Simple arithmetic calculator using switch() selection.

#include <iostream>
using namespace std;

int main()
{
   float a, b, result;
   char operation;
 
   // Get numbers and mathematical operator from user input
   // Mittwoch Gruppe: flovb: cout << "MyCalculator \n" << "------------\n" << "Possible operations: +\n" << "Example: 2+4" << endl;
   cout << "MyCalculator \n" << "------------\n" << "Possible operations: +\n" << "Example: 2+4" << endl;
   cin >> a >> operation >> b;

   // Character constants are enclosed in single quotes
   switch(operation)
   {
   case '+':
         result = a + b;
         break;

   default:
         cout << "Invalid operation. Program terminated." << endl;
         return -1;
   }

   // Output result
   cout << result << endl;
   return 0;
}
