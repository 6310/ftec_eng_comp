#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//GOGO GEIO
main(void)
{
	int v1;
		
	printf("Escreva um dia do ano: ");
	scanf("%d", &v1);
	
	
	//Começo da loucuragem
	if (v1<=31)
	{
		printf(" Dia do mes: %d / 1",v1); //janeiro
	}
	else
	{
		if (v1<=59)
		{
			printf("Dia do mes: %d /2", v1-31);//fevereiro
		}
		else
		{		
			if (v1<=90)
			{
				printf("Dia do mes: %d /3", v1-59);//março
			}
			else
			{	
				if (v1<=120)
				{
					printf("Dia do mes: %d /4", v1-90);//abril
				}
				else
				{	
					if (v1<=151)
					{
						printf("Dia do mes: %d /5", v1-120);//maio
					}
					else
					{	
						if (v1<=181)
						{
							printf("Dia do mes: %d /6", v1-151);//junho
						}
						else
						{	
							if (v1<=212)
							{
								printf("Dia do mes: %d /7", v1-181);//julho
							}
							else
							{
								if (v1<=243)
								{
									printf("Dia do mes: %d /8", v1-212);//agosto
								}
								else
								{
									if (v1<=273)
									{
										printf("Dia do mes: %d /9", v1-243);//setembro
									}
									else
									{
										if (v1<=304)
										{
											printf("Dia do mes: %d /10", v1-273);//outubro
										}
										else
										{
										
											if (v1<=334)
											{
												printf("Dia do mes: %d /11", v1-304);//novemrbo
											}
											else
											{
												if (v1<=365)
												{
													printf("Dia do mes: %d /12", v1-334); // dezembro		
												}
											}	
										}
									}
								}
							}
						}
					}
				}
			}									
		}
	}
}
