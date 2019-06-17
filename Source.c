#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

main()
{
	int JMBG[13], i, j, k, s = 0;
	printf("Unesite JMBG (sa razmacima izmedju brojeva): ");
	for (i = 0; i < 13; i++)
	{
		scanf("%d", &JMBG[i]);
	}
	i = 0;
	for (j = 7; j > 1; j--)
	{
		s += j * JMBG[i];
		i++;
	}
	i = 6;
	for (j = 7; j > 1; j--)
	{
		s += j * JMBG[i];
		i++;
	}
	k = 11 - (s % 11);
	if (k == 10 || k == 11)
	{
		k = 0;
	}
	if (k == JMBG[12])
		printf("JMBG je ispravan!");
	else
		printf("JMBG je neispravan!");
}