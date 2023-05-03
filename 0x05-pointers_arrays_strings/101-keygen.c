#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[];':\",./<>?";
    const int password_length = 12;
    char password[password_length + 1];

    srand(time(NULL));

    for (int i = 0; i < password_length; i++)
    {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    password[password_length] = '\0';

    printf("Generated password: %s\n", password);

    return 0;
}

