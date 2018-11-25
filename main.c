#include <stdio.h>
#include <stdlib.h>


int main()
{
    char name[30];
    double x/*basic salary*/ ;
    float i1=(5/100);
    float i2=(10/100);
    float i3=(15/100);

    printf("\nEnter Employee name:\t");
    scanf("%s",&name);
    printf("\nEnter your basic salary:\t");
    scanf("%f",&x);

    if (x<=5000)
    {
        x+=(x*i1);
        printf("\nName of the employee:\t%s",name);
        printf("\nSalary of the employee:\t%f",x);
    }
    if (5000<=x<10000)
    {
        x+=(x*i2);
        printf("\nName of the employee:\t%s",name);
        printf("\nSalary of the employee:\t%f",x);
    }
    if (x<=10000)
    {
        x+=(x*i3);
        printf("\nName of the employee:\t%s",name);
        printf("\nSalary of the employee:\t%f",x);
    }
    return 0;
}
