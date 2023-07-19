#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GiveShell() 
{
    printf("Well done! This is a new shell\n");
    system("/bin/sh -l");
}


int VerifyPassword()
{
    char password[64];
    printf("password: ");
    gets(password);

    return (strcmp(password, "Sup3r!C0mpl!c4t3dPassword")==0);
}


int main(int argc, char **argv)
{
    printf("WELCOME \n");

    if (VerifyPassword())
    {
        GiveShell();
    } else {
        printf("Wrong password, sorry;\n");
    }
  
}