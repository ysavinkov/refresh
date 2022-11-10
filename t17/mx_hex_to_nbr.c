#include <stdio.h>
#include <stdbool.h>

bool mx_isdigit(int c) {
    if(c >= 48 && c <= 57)
        return true;
    else return false;
}

bool mx_isalpha(int c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else return false;
}

bool mx_islower(int c) {
    if(c >= 'a' && c <= 'z')
        return true;
    else return false;
}

bool mx_isupper(int c) {
    if (c >= 'A' && c <= 'Z')
        return true;
    else return false;
}

unsigned long mx_hex_to_nbr(const char* hex) {
    unsigned long res = 0;
    unsigned long temp = 1;
    int count = 0;

    if (hex == NULL) 
        return 0;
    while (hex[count] != '\0') 
        count++;
    for (int i = count - 1; i >= 0; i--) {
          if (mx_isdigit(hex[i])) {
            res += ((hex[i] - 48) * temp);
            temp *= 16;
        }
        if (mx_isalpha(hex[i])) {
            if (mx_islower(hex[i]))
                res += ((hex[i] - 87) * temp);
            if (mx_isupper(hex[i])) 
                res += ((hex[i] - 55) * temp);

            temp *= 16;
        }
    }
    return res;
}


