#include<stdio.h>
#include<conio.h>

void main()
{
    int cons_no;
    float units, total_amt, rem_units;
    clrscr();

    printf("Enter the consumer number: ");
    scanf("%d", &cons_no);

    printf("Enter the amount of electricity used (in units): ");
    scanf("%f", &units);

    if(units>0 && units<=200)
    {
	total_amt=units*0.50;
    }
    else if(units>200 && units<=400)
    {
	rem_units=units-200;
	total_amt=100+rem_units*0.65;
    }
    else if(units>400 && units<=600)
    {
	rem_units=units-400;
	total_amt=230+rem_units*0.80;
    }
    else if(units>600)
    {
	rem_units=units-600;
	total_amt=390+rem_units*1.00;
    }
    else
    {
	total_amt=0;
    }

    printf("\nELECTRICITY BILL\n");
    printf("Consumer Number: %d\n", cons_no);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount: Rs. %.2f", total_amt);

    getch();
}
