/*(Approximate p) p can be computed using the following formula:
p =  sqrt(6 * 1/4 + 1/9 + 1/16 + 1/25 + ...)
Write a program that displays the result of
p =  sqrt(6 * 1/4 + 1/9 + 1/16 + 1/25)
p =  sqrt(6 * 1/4 + 1/9 + 1/16 + 1/25 + 1/36)
 Use 1.0 instead of 1 in your program.
@uthor Edin Korkic
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     cout << " p= " << sqrt(6 * (1.0/4) + (1.0/9) + (1.0/16) + (1.0/25))<< endl;
     cout << " p= " << sqrt(6 * (1.0/4) + (1.0/9) + (1.0/16) + (1.0/25) + (1.0/36))<< endl;

    return 0;
}


