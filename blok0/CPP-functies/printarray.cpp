#include <iostream>
#include <stdio.h>

using namespace std;




 void print_array(int a[], int length)
{

    for (int i=0; i<length; i++)
    {
        cout << i + 1 << " " << a[i] << endl;
    }

}


int main()
{
   
    int tomas[6] = { 1, 2, 3, 4, 5, 6 };
    
    print_array (tomas, 6);
    return 0;
    
}