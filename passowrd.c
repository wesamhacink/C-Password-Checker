
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char password[100];
    int upper = 0;
    int lower = 0;
    int number = 0;
    int symbol = 0;

    printf("Enter your password: ");
    scanf("%99s", password);

    int length = strlen(password);

    for (int i = 0; password[i] != '\0'; i++)
    {
        if (isupper((unsigned char)password[i]))
            upper = 1;

        else if (islower((unsigned char)password[i]))
            lower = 1;

        else if (isdigit((unsigned char)password[i]))
            number = 1;

        else
            symbol = 1;
    }

    printf("\n--- Password Check ---\n");

    printf("Length > 8: %s\n", length > 8 ? "PASS" : "FAIL");
    printf("Uppercase:  %s\n", upper ? "PASS" : "FAIL");
    printf("Lowercase:  %s\n", lower ? "PASS" : "FAIL");
    printf("Number:     %s\n", number ? "PASS" : "FAIL");
    printf("Symbol:     %s\n", symbol ? "PASS" : "FAIL");

    if (length > 8 && upper && lower && number && symbol)
        printf("\nStrong Password!\n");
    else
        printf("\nWeak Password!\n");

    return 0;
}
