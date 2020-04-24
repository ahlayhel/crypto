#include <stdio.h>

void map_2_2()
{
	int ctr = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				for (int l = 0; l < 2; l++)
				{
					for (int m = 0; m < 2; m++)
					{
						for (int n = 0; n < 2; n++)
						{
							for (int o = 0; o < 2; o++)
							{
								for (int p = 0; p < 2; p++)
								{
									printf("g%d\n", ctr);
									printf("%d%d --> %d%d;   ", 0, 0, i, j);
									printf("%d%d --> %d%d;   ", 0, 1, k, l);
									printf("%d%d --> %d%d;   ", 1, 0, m, n);
									printf("%d%d --> %d%d\n", 1, 1, o, p);
									printf("\n");
									ctr++;
								}
							}
						}
					}
				}
			}
		}
	}
}
