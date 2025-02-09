#include <stdio.h>
int main()
{
    int calls;
    float bill;
    printf("Enter the number of calls : ");
    scanf("%d", &calls);
    switch (calls / 50)
    {
        case 0: 
            bill = 100.0;
            //return bill; 
            break;
        case 1: 
            bill = 100.0 + (calls - 50) * 0.80;
            //return bill;
            break;
        case 2: 
            bill = 100.0 + 50 * 0.80 + (calls - 100) * 0.60;
            //return bill;
            break;
        default: 
            bill = 100.0 + 50 * 0.80 + 100 * 0.60 + (calls - 200) * 0.40;
    }
    printf("Total Telephone Bill: Rs. %.2f\n", bill);

    return 0;
}