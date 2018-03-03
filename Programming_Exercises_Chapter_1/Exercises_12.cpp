/*(Average sales in kilograms) Assume a vendor sells 5553 grams of grocery in 2 hours,
9 minutes and 30 seconds. Write a program that displays the average sale in kilograms
per hour (Note that 1 kilogram is 1000 grams).
@uthor Edin Korkic
*/

#include <iostream>

using namespace std;

int main()
{
     // formula kg/h ^ g/min
    cout << " The average sale in kilograms per hour " << ((5553/129.5) * 60)/1000 <<endl;

    return 0;
}
