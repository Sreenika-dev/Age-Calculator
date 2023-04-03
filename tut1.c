#include <string.h>
#include <stdio.h>

typedef struct
{
    /* data */
    string name;
    string number;
} person;

int main(void)
{
    person people[4];
    people[0].name = "Shawn";
    people[0].number = "19088653234";

    people[1].name = "Ariana";
    people[1].number = "41351879122";

    people[2].name = "Taylor";
    people[2].number = "7861235673";

    people[3].name = "Rihanna";
    people[3].number = "9089806653";

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, "Rihanna") == 0)
        {
            printf("%s", people[i].number);
            return 0;
        }
    }
    printf("Number Not found");
    return 1;
    printf("Wanna create a new contact?");
}