#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter a 24-hour time\n");
    scanf("%d:%d",&a,&b);
    if(a>23||b>59) printf("Wrong!\n");
    if(a==0) printf("Equivalent 12-hour time:%d:%.2d AM\n",a+12,b);
    if(a>12&&a<=23) printf("Equivalent 12-hour time:%d:%.2d PM\n",a-12,b);
    if(a<12) printf("Equivalent 12-hour time:%d:%.2d AM\n",a,b);
    if(a==12) printf("Equivalent 12-hour time:%d:%.2d PM\n",a,b);
}