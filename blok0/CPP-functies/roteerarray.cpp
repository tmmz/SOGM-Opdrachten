//
//  roteerarray.cpp
//  
//
//  Created by tomas loos on 16-10-14.
//
//

#include <stdio.h>
#include <iostream>

using namespace std;

void roteer_array(int array[], int length)
{
    
    int eerste = array[0];
    
    for (int i=0; i<length - 1; i++)
    {
        array[i] = array[i + 1];
    }
    
    array[9] = eerste;
    
}

void print_array(int a[], int length)
{
    
    for (int i=0; i<length; i++)
    {
        cout << i + 1 << " " << a[i] << endl;
    }
    
}


int main()
{
    
    int array [10] = {1,2,3,4,5,6,7,8,9,0};
    
    roteer_array (array, 10);
    
    print_array (array, 10);
    
    return 0;
}