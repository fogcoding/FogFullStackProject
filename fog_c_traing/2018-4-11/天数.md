## 题目：求一个日期是当年的第几天？


```
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

```
---
### 分析和总结
* 写代码之前，要先做好规划，搞明白，想清楚！然后做好步骤规划，先写出代码运行框架。这样一来，在实际开发中，节省的用于理清思绪和修复bug的时间，要远远超出当初思考的时间，是相当有效的提升个人效率的方法！
* 模块化，可以让许多代码量变大的情况下，变得逻辑清晰和结构简单，对于节省中途接手时梳理逻辑和运行步骤的时间消耗，有大幅度的减少作用也能降低理解难度！
