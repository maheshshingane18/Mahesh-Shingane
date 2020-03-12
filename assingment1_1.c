#include <stdio.h>
#include <stdlib.h>

struct date
{
	int date;
	int month;
	int year;
};

void InitDate(struct date* ptDate)
{
  ptDate->date=1;
  ptDate->month=4;
  ptDate->year=1996;

}
void PrintDateOnConsole(struct date* ptDate)
{
   printf("%d-%d-%d",ptDate->date,ptDate->month,ptDate->year);
}

void AcceptDateFromConsole(struct date* ptDate)
{
  printf("Enter date :");
  scanf("%d",&ptDate->date);
  printf("Enter month :");
  scanf("%d",&ptDate->month);
  printf("Enter year :");
  scanf("%d",&ptDate->year);
}

int menuchoice()
{
	int choice;
	printf("0.Exit\n1.InitDate\n2.PrintDateOnConsole\n3.AcceptDateFromConsole\n");
	printf("Enter choice: ");
	scanf("%d",&choice);
	return choice;
}
int main(void)
{
	struct date date_t;
	int choice;
	while((choice=menuchoice())!=0)
	{
		switch(choice)
		{
		case 1:
			InitDate(&date_t);
			PrintDateOnConsole(&date_t);
			break;
		case 2:
			PrintDateOnConsole(&date_t);
			break;
		case 3:
			AcceptDateFromConsole(&date_t);
			break;
		}
	}
	return 0;
}
