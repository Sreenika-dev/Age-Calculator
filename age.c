#include <stdio.h>

void ageCalculator(int present_year, int present_month, int present_date, int birth_year, int birth_month, int birth_date)
{
    int month[] = {
        31,
        28,
        31,
        30,
        31,
        30,
        31,
        31,
        30,
        31,
        30,
        31};
    if (birth_month > present_month)
    {
        present_year = present_year - 1;    // then don't calculate this year
        present_month = present_month + 12; //(calculating 12 months from 2022) so total months
        // 12 months from 2022 jan to december and remaining 4 months from jan 2023 to april 2023  = 16 months (completed)
    }

    if (birth_date > present_date)
    {
        present_month = present_month - 1; // as the month isn't completed for the rquired date to add it into months (16 - 1 = 15 months because april isnt completed fully)
        present_date = present_date + month[birth_month - 1];
    }

    int final_year = present_year - birth_year;
    int final_month = present_month - birth_month;
    int final_date = present_date - birth_date;
    printf("%d Years %d Months %d Days", final_year, final_month, final_date);
}

int main(void)
{
    int present_year = 2023;
    int present_month = 4;
    int present_date = 3;
    int birth_year = 1999;
    int birth_month = 12;
    int birth_date = 18;

    ageCalculator(present_year, present_month, present_date, birth_year, birth_month, birth_date);
}