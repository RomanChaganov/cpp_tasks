#include "t3_1.h"

char* remove_spaces(char* str)
{
    int str_len = strlen(str);
    char* new_str = new char[str_len];
    
    int space = 0;
    int j = 0;
    
    for (int i = 0; i < str_len; i++)
    {
        if (str[i] != ' ')
        {
            space = 0;
            new_str[j] = str[i];
            j += 1;
            continue;
        }
        
        if (i == 0)
        {
            space = 1;
            continue;
        }
        
        if (space == 0)
        {
            space = 1;
            new_str[j] = str[i];
            j += 1;
            continue;
        }
    }
    
    if (new_str[j - 2] == ' ')
        new_str[j - 2] = '\0';
    
    return new_str;
}