#include "revert_string.h"
#include "../swap/swap.h"
#include <string.h> 
void RevertString(char *str)
{
    if (str == NULL) return; 

    int len = strlen(str);
    char *start = str;           
    char *end = str + len - 1;   

    while (start < end)
    {
        Swap(start, end); 
        start++;          
        end--;            
    }
}