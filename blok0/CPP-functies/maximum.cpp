#include <iostream>
#include <stdio.h>

using namespace std;

int return_max(int array[], int length)
{
    
    int max = array[0];
    
    for (int i=0; i<length; i++)
    {
        if ( array[i] > max )
        {
            max = array[i];
        }
    }
    
    return max;
}

int main()
{
    
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    
    
    cout << return_max (array, 10) << endl;
    
    return 0;
    
}