#include<stdio.h>
void convert(int );
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    convert(num);
    return 0;
}
void convert(int n){
    char result[10];
    while (n>0)
    {
      
       char c=(n-1)%26 + 'A';
        result[] =c + result[];
        n=(n-1)/26;
    }
    printf(result);
    

}
