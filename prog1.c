#include<stdio.h>
int main()
{
    char fname[20],lname[10];
    printf("Enter your first name: ");
    scanf("%s",fname);
    printf("Enter your last name: ");
    scanf("%s",lname);
    printf("your fullname is %s %s",fname,lname);
    return 0;
}