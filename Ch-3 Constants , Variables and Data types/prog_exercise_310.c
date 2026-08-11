#include <stdio.h>
int main()
{
    int total_days , weeks , years , days ;

    printf("Enter total number of days: ");
    scanf(" %d" , &total_days);

    years = total_days / 365 ;
    weeks = (total_days % 365) / 7;
    days =  (total_days % 365) % 7;

    printf(" %d days = %d years , %d weeks , and %d days \n" , total_days , years , weeks , days);

    return 0 ;
}