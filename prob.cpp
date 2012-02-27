// Find the number of draws required to get a match w/ uniform distribution 
// over 365.  "The Birthday Problem"

#include <iostream>
using namespace std;

int main() 
{   
    double n;
    double r = 30.0;
    double prob = 1.0;
    double den = 1.0;
    double num = 1.0;

    while (prob > 0.2) {
         prob = 1.0;
         den = 1.0;
         num = 1.0;  
         
         for (n = 365; n > (365 - r); n--)  {     
            num = num*n;
            den = den*365;
            // cout << num << den << "In for loop\n";                 
            }
        prob = num / den;
        cout << r << ", " << prob << "\n";  
        ++r;                    //add 1 to r
        }    
    return 0;               //tell system done
}


