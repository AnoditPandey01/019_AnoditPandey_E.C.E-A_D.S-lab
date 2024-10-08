#include <stdio.h>
// i) String Length  
// ii) String Reversal
// iii) String Compare
// iv) String Concatenate
// v) String Copy
int main() {
    char str1[100], str2[100], concat[200], reverse[200];
    int len1 = 0, len2 = 0, i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Calculate lengths of the strings
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // String comparison
    for (i = 0; i < len1 && i < len2; i++) {
        if (str1[i] != str2[i]) {
            printf("The strings are not equal.\n");
            break;
        }
    }
    if (i == len1 && i == len2) {
        printf("The strings are equal in length.\n");
    } else if (i == len1) {
        printf("The first string is less than the second string in length.\n");
    } else {
        printf("The first string is greater than the second string in length.\n");
    }

    // String concatenation
    for (i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }
    for (j = 0; j < len2; j++, i++) {
        concat[i] = str2[j];
    }
    concat[i] = '\0';
    printf("The concatenated string is: %s\n", concat);

    // String reversal
    for (i = len1 + len2 - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = concat[i]; //String Copy
    }
    reverse[j] = '\0';
    printf("The reversed string is: %s\n", reverse);
}