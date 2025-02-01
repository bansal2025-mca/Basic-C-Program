#include <stdio.h>

int main()
{
    float f,c;
    int ch;
    printf("Temperature Conversion Program\n ");
    printf("1.Convert Fahrenheit to celsius\n");
    printf("2.Convert celsius to Fahrenheit\n");
    printf("Enter your choice");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter temperature in fahrenheit");
        scanf("%f",&f);
        c = (f-32)*5/9;
        printf("%0.2f Fahrenheit is %0.2f Celcius\n",f,c);
        break;
    case 2:
        printf("Enter temperature in celsius");
        scanf("%f",&c);
        f = (c*9/5)+32;
        printf("%0.2f Celciusis %0.2f Fahrenheit\n",c,f);
        break;
    default:
        printf("Invalid choice. please enter 1 or 2.\n");
        break;
    return 0;
    }
}
