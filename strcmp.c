#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
    char str1[100], str2[100];
    int i;

    printf("enter your first string for comparison: ");
    gets(str1);
    printf("enter second string for comparison: ");
    gets(str2);

  	for(i = 0; str1[i] == str2[i] && str1[i] == '\0'; i++)
    ;

        if (str1[i] < str2[i]) {
            printf("string 2 is not equal to string 1");

        } else if (str1[i] > str2[i]) {
            printf("string 1 is not equal to string 2");
        
        } else if (str1[i] == str2[i]) {
            printf("string 1 and string 2 are equal");
        }
        return 0;
}