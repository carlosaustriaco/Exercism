#include "isogram.h"
#include <string.h>
#include <stdlib.h>

bool is_isogram(const char phrase[]){
    int len;
    char *used_chars;
    int i;
    bool result = true;

    if (phrase == NULL)
        return false;

    len = strlen(phrase);
    used_chars = (char *)malloc(len * sizeof(char));

    for(i = 0; i < len; i++){
        if ((strchr(used_chars, phrase[i]) == NULL) || (phrase[i] == ' ') || (phrase[i] == '-')){
            used_chars[i] = phrase[i];
        }
        else{
            result = false;
            break;
        }
    }

    free(used_chars);
    return result;
}