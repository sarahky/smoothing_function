#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <smooth.h>
#include <read_data.h>

/*
int read_data(FILE* data_file,float* data, int max_data); 
void smooth(float* data, float* output, int filter_length, int max_data);
*/

int main(void)
{
int array_size=255; /*size of array*/
int filter_length=5; /*size of filter*/
float original[array_size]; /*orignal data*/
float output[array_size]; /*output*/
int count=0;

FILE* data_file;  /*the rough sine data*/
FILE* smooth_data; /*the smooth sine data*/
data_file= fopen("afile.dat","r"); /*reading in the function*/

count=read_data(data_file,original,array_size); /*converting string to float then returning the amount of the array used*/
smooth_data= fopen("smooth_data.dat","w");

fclose(data_file);

smooth(original,output,filter_length, count); /*filtering the data and smoothing the sin wave*/

for (int i=0; i<count-filter_length+1;i++)
	{
		fprintf(smooth_data, "%f\n",output[i]);
	}		
fclose(smooth_data);
return 0;
}



