#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*filter*/


void smooth(float* data, float* output, int filter_length, int max_data)
{	




	for(int n=0;n<max_data-filter_length+1;n++)  /*full array*/
		{

			float x=0;

			for(int m=0;m<filter_length;m++)   /*filter*/
				{
					x=x+data[m+n];
				}
			 output[n]=x/(float)filter_length;

			 /*printf("%f\n",output[n]);
			 printf("Filtered"); */
		}


}

