#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

// er moet 1 main zijn en er mag er ook maar 1 zijn.

int main()
{
    
    int freq = 480; //rondjes per seconde
    int SR = 48000; //samples per seconde
    double sampsPerPeriode = SR / freq; //48000 / 480 = 100
    
    for (int i = 0; i < sampsPerPeriode; i++)
    {
        double waarde = sin((i / sampsPerPeriode) * 2 * M_PI );
        
        cout << waarde << endl;
    }
        
    
    
    
    
    
    
    
// cout = println of echo.
// cin  = om dingen te lezen.


return 0;
}
