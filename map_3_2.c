#include <stdio.h>

void map_3_2()
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
									for (int q = 0; q < 2; q++)
									{
										for (int r = 0; r < 2; r++)
										{
											for (int s = 0; s < 2; s++)
											{
												for (int t = 0; t < 2; t++)
												{
													for (int u = 0; u < 2; u++)
													{
														for (int v = 0; v < 2; v++)
														{
															for (int x = 0; x < 2; x++)
															{
																for (int y = 0; y < 2; y++)
																{
																	printf("g%d\n", ctr);
																	printf("%d%d%d --> %d%d;   ", 0, 0, 0, i, j);
																	printf("%d%d%d --> %d%d;   ", 0, 0, 1, k, l);
																	printf("%d%d%d --> %d%d;   ", 0, 1, 0, m, n);
																	printf("%d%d%d --> %d%d;   ", 0, 1, 1, o, p);
																	printf("%d%d%d --> %d%d;   ", 1, 0, 0, q, r);
																	printf("%d%d%d --> %d%d;   ", 1, 0, 1, s, t);
																	printf("%d%d%d --> %d%d;   ", 1, 1, 0, u, v);
																	printf("%d%d%d --> %d%d\n  ", 1, 1, 1, x, y);
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
							}
						}
					}
				}
			}
		}
	}
}
