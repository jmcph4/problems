#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void)
{
    Node h; /* head */
    
    init(0, &h); /* initialise list */
    
    /* seed list */
    list_append(1, &list);
    list_append(2, &list);
    list_append(3, &list);
    
    /* your code here */
    
    cleanup(&h); /* free list */
    
    return EXIT_SUCCESS;
}
