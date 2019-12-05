#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* menu_name) {
    char arr[101];
    char* ptr = menu_name;
    int count=0, i=0;
    int j=0;
    while (*ptr != NULL)
    {
        if (ptr[0] == ' ')
        {
            count = -1;
        }
        else if (count == 0)
        {
            arr[i] = (*ptr) - ('a'-'A');
            i++;
        }
        ptr++;
        j++;
        count++;
    }
    
    char* answer = (char *)arr;
    return answer;
}
