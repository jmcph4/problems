#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

/* your code here */

int main(void)
{
    int data[N];
    
    srand(time(NULL));
    
    for(unsigned int i=0;i<N;i++)
    {
        data[i] = rand();
    }
    
    /* your code here */

    return EXIT_SUCCESS;
}
