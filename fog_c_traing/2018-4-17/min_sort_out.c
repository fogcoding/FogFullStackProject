#include <stdio.h>
//#include <>
/*
steps:
1.a,b对比，小的给a
2.a,c对比，小的给a
3.b,c对比，小的给b
*/
void swap(int *a,int *b);
void sort(int *a,int *b,int *c);

int main(){
	int a = 3;
	int b = 2;
	int c = 1;
	
	//printf("plz input date,and formate like:2018-11-11\n");
	//scanf("%d %d %d",&a,&b,&c);
	sort(&a,&b,&c);
	
	printf("a = %d b = %d c = %d \n",a,b,c);
	
	getchar();
	return 0;
	
}

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b =  temp;
}

void sort(int *a,int *b,int *c){
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(a,c);
	}
	if(b>c){
		swap(b,c);
	}
}