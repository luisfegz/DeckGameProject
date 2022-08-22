#include<stdio.h>
#include<stdlib.h>
int main()
{
	int opc, i;
	do
	{
		printf("¡Welcome to this program! Enjoy the expirience, please select any of this options:\n");
		printf(" 1. Walking\n");
		printf(" 2. Deck\n");
		printf(" 3. Bestiary\n");
		printf(" 4. Save\n");
		printf(" 5. Exit\n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				{
					printf("You chose Walking\n");
					break;
				}
			
			case 2:
				{
					printf("You chose Deck\n");
					break;
				}
			
			case 3:
				{
					printf("You chose Bestiary\n");
					break;
				}
				
			case 4:
				{
					printf("You chose Save\n");
					break;
				}
				
			case 5:
				{
					printf("You chose Exit\n");
					break;
				}
			default:
				{
					printf("¡Invalid option! Please select again.");
					break;
				}
		}
	}while(opc != 5);
	return 0;	
}
	