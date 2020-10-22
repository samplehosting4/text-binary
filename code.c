/* Coder:Muhammad Sharique
Date:27.6.2019
bugs:unknown
work:encrypts a text in its binary form
algorithm:
first converts one character of text in its ASCII and then converts it in binary form.
input:simply type text without emogies in input .
*/
#include<stdio.h>
#include<string.h>
# define HRLINE for(int i=0;i<=50;i++)\
printf("_");

long  binary(int ch);
int main()
{
    char str[1024],ch;
    long int binary_number;
    int length;
    gets(str);
    HRLINE
    printf("\nOriginal Text :->\n");
    puts(str);
    HRLINE
    printf("\nEncrypted text :->\n");
    length=strlen(str);
    for(int i=0;i<length;i++)
    {
        ch=str[i];
        binary_number=binary(ch);
        printf("%ld ",binary_number);
    }
    return 0;
}
long binary(int ch)
{
    long int binary_num=0;
    int rem,temp = 1;
    while(ch!=0)
    {
        rem=ch%2;
        ch=ch/2;
        binary_num=binary_num+(rem*temp);
        temp=temp*10;
    }
    return (binary_num);

}
