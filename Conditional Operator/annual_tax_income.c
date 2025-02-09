#include<stdio.h>
int main() {
    float income, tax = 0; 
    printf("Enter your annual taxable income: ");
    scanf("%f", &income);
    if (income <= 100000)
    {
        tax = 0;
    }
    else if (income > 100000 && income <= 150000)
    {
        switch (1)
        {
            case 1:
            tax = 0.1*(income - 100000); 
            break;
        }
    }
    else if(income > 150000 && income <= 250000)
    {
        switch (2)
        {
            case 2:
            tax = 5000 + 0.2*(income - 150000); 
            break;
        }  
    }
    else if(income > 250000) 
    {
        switch (3)
        {
            case 3:
            tax = 25000 + 0.3 * (income - 250000); 
            break;
        }
    }
    printf("The tax on an income of rs %0.2f is rs %0.2f\n ",income,tax);
    return 0;
}
