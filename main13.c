#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int e_usage;
	float arr[] = {
				    [0] = 2.10, //<=120
				    [1] = 2.10, //<=120
				    [2] = 3.02, //121-330
				    [3] = 2.68, //121-330
				    [4] = 4.39, //331-500
				    [5] = 3.61, //331-500
				    [6] = 4.97, //501-700
				    [7] = 4.01, //501-700
				    [8] = 5.63, //>=701
				    [9] = 4.50, //>=701
				  };
	printf("Please input the electricity usage: ");
	scanf(" %d" ,&e_usage);
	if(e_usage>120)
	{
		 if(e_usage>330)
		 {
		 	if(e_usage>500)
		 	{
		 		if(e_usage>700)
		 		{
		 			printf("Summer months: %.02f\n" ,120*arr[0]+(330-121+1)*arr[2]+(500-331+1)*arr[4]+(700-501+1)*arr[6]+(e_usage-701+1)*arr[8]);
					printf("Non-Summer months: %.02f\n" ,120*arr[1]+(330-121+1)*arr[3]+(500-331+1)*arr[5]+(700-501+1)*arr[7]+(e_usage-701+1)*arr[9]);
				}
				else
				{
					printf("Summer months: %.02f\n" ,120*arr[0]+(330-121+1)*arr[2]+(500-331+1)*arr[4]+(e_usage-501+1)*arr[6]);
					printf("Non-Summer months: %.02f\n" ,120*arr[1]+(330-121+1)*arr[3]+(500-331+1)*arr[5]+(e_usage-501+1)*arr[7]);
				}
			}
			else 
			{
				printf("Summer months: %.02f\n" ,120*arr[0]+(330-121+1)*arr[2]+(e_usage-331+1)*arr[4]);
				printf("Non-Summer months: %.02f\n" ,120*arr[1]+(330-121+1)*arr[3]+(e_usage-331+1)*arr[5]);
			}
		 }
		 else
		 {
		 	printf("Summer months: %.02f\n" ,120*arr[0]+(e_usage-121+1)*arr[2]);
			printf("Non-Summer months: %.02f\n" ,120*arr[1]+(e_usage-121+1)*arr[3]);
		 }
	}
	else 
	{
		printf("Summer months: %.02f\n" ,e_usage*arr[0]);
		printf("Non-Summer months: %.02f\n" ,e_usage*arr[1]);
	}
}
