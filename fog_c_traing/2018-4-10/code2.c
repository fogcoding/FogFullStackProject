#include <stdio.h>
#include <string.h>
#include <math.h>

int isFullSqrt(int num);

int main ()
{
	int x;
	int temp = 0;
	
	//printf("%d is fullsqrt ? -> %d \n",101,isFullSqrt(101));
	for(x=0;x<100000;x++){
		temp = x+100;
		if( isFullSqrt(temp) < 0){
			continue;
		}
		temp = temp + 168;
		if( isFullSqrt(temp) > 0){
			printf("x can be %d \n",x);
		}
	}
	
	getchar();
    return 0;
}


int isFullSqrt(int num){
	int i = 0;
	while( i<num ){
		if(i*i > num){
			return 0;
		}
		if(i*i == num ){
			return 1;
		}
		i++;
	}
	return 0;
};