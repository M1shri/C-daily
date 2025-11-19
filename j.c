#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;
    
    printf("Enter a string: ");
    gets(str); 

    int len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; ) {
            if (str[j] == str[i]) {
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--;
            } else {
                j++;
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}
