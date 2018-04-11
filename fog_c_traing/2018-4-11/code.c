#include <stdio.h>
//#include <>
/*
steps:
1.判断是否是闰年
2.判断第几个月
3.现在是第几天
*/
int isRunNian(int year);
int get_number(int year,int month,int day);

int main(){
	int year = 0;
	int month = 0;
	int day = 0;

	printf("plz input date,and formate like:2018-11-11\n");
	scanf("%d %d %d",&year,&month,&day);
	printf("%d年%d月%d日 是第%d天！\n",year,month,day,get_number(year,month,day));

	getchar();
	return 0;
}

int isRunNian(int year){
		//4,100,400
		if( year%4 == 0 ){
			return 1;
		}
		if( year%100 == 0 ){
			return 1;
		}
		if( year%400 == 0 ){
			return 1;
		}
		return -1;
};

int get_number(int year,int month,int day){

	int month_day_run[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int month_day_no_run[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int flag = isRunNian(year);
	int i = 0;
	int res = 0;
	if(flag > 0){
		while(i < month-1){
			res += month_day_run[i++];
		}
		res = res + day;
		return res;
		}else if(flag < 0){
		while(i < month-1){
			res += month_day_no_run[i++];
		}
		res = res + day;
		return res;
	}else{
		return -1;
	}
};
