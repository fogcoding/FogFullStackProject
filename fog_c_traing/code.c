#include <stdio.h>
#include <string.h>

int main ()
{
  int money =50;

  int a = 3;		//cost_man
  int b = 2;		//cost_woman
  int c = 1;		//cost_kid

  int i = 0;		//man_num
  int j = 0;		//woman_num
  int k = 0;		//kid_num
  for(;i<30;i++){
	  for(;j<30;j++){
		  k = 30 - i - j;
		  //printf("situation: man=%d,woman=%d,kid=%d\n",i,j,k);
		  if(i+j+k>30 || k <= 0){
			  break;
		  }
		  if(a*i+b*j+c*k==50){
			  printf("find one: man=%d,woman=%d,kid=%d\n",i,j,k);
		  }
	    }
		j=0;
    }


}
