#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40];
    //Basic Salary
    double x;
    const float y = 100.0;
    const float i1=(5/y);
    const float i2=(10/y);
    const float i3=(15/y);

    printf("\n\t\t\t******************************\n\t\t\t\tSalary Calculator\n\t\t\t******************************\n");

    printf("\n\t\t\tEnter Employee name: ");
    scanf("%[^\n]s",&name);
    printf("\n\t\t\tEnter your basic salary: Rs. ");
    scanf("%lf",&x);

    if (x <= 5000)
    {
        x+=(x*i1);
        printf("\n\t\t\tName of the employee: %s",name);
        printf("\n\t\t\tNet Salary of the employee: Rs. %.2lf\n",x);
    }

    if (x > 5000 && x < 10000)
    {
        x+=(x*i2);
        printf("\n\t\t\tName of the employee: %s",name);
        printf("\n\t\t\tNet Salary of the employee: Rs. %.2lf\n",x);
    }

    if (x >= 10000)
    {
        x+=(x*i3);
        printf("\n\t\t\tName of the employee: %s",name);
        printf("\n\t\t\tNet Salary of the employee: Rs. %.2lf\n",x);
    }

    return 0;
}
