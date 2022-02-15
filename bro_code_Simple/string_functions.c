#include<stdio.h>
#include<string.h>

int main(){
    char string1[] = "Bro";
    char string2[] = "code";

    strlwr(string1); // Converts a string to lowercase
    printf("%s \n", string1);

    strupr(string1); // Converts a string to uppercase
    printf("%s \n", string1);

    strcat(string1, string2); //appends string 1 to the end of string1
    printf("%s \n", string1);

    strrev(string1); //reverses the letters in  the string ~
    printf("%s", string1);

    return 0;
}
