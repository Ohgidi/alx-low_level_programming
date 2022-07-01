#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * *main-checkifarandomnumberispositiveornegative
 * *
 * *Return:0iferror
 * */
intmain(void)
{
		intn;
			intnLast;

				srand(time(0));
					n=rand()-RAND_MAX/2;
						nLast=n%10;

							if(nLast>5)
										printf("Lastdigitof%dis%dandisgreaterthan5\n",n,nLast);
								elseif(nLast<6&&nLast!=0)
											printf("Lastdigitof%dis%dandislessthan6andnot0\n",n,nLast);
									else
												printf("Lastdigitof%dis%dandis0\n",n,nLast);

										return(0);
}
