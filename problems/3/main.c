#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void)
{
    /* heads */
    Node h1;
    Node h2;
    
    /* initialise lists */
    init(0, &h1);
    init(0, &h2);
    
    /* seed lists */
    list_append(1, &h1);
    list_append(3, &h1);
    list_append(5, &h1);
    
    list_append(2, &h2);
    list_append(4, &h2);
    list_append(6, &h2);
    
    /* your code here */
    
    /* free lists */
    cleanup(&h1);
    cleanup(&h2);
    
    return EXIT_SUCCESS;
}
