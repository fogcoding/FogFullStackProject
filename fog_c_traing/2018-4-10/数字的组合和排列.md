## 题目1：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

```
#include “stdio.h”
#include “conio.h”
main()
{
  int i,j,k;
  printf(“\n”);
  for(i=1;i<5;i++) /*以下为三重循环*/
   for(j=1;j<5;j++)
    for (k=1;k<5;k++)
      {
        if (i!=k&&i!=j&&j!=k) /*确保i、j、k三位互不相同*/
        printf(“%d,%d,%d\n”,i,j,k);
      }
  getch();
}
```

> 总结：有时候是自己想得太多了，在一个很少的数量级的运算量下，尝试找到用来解决亿以上的处理办法，实在是浪费时间！

> 这种情况可以拓展为某些元素的排列组合结果求解，可以进一步探讨！

---
思路一：利用二叉树的数据结构

![示意图](https://github.com/fogcoding/FogFullStackProject/blob/master/fog_c_traing/2018-4-10/%E7%A9%B7%E4%B8%BE%E5%85%83%E7%B4%A0%E5%8F%AF%E8%83%BD%E6%80%A7.png)

---
## 题目2：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

```
#include <stdio.h>
#include <string.h>
#include <math.h>

int isFullSqrt(int num);

int main ()
{
	int x;
	int temp = 0;

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

    //优化关键一步判断，能避免大量的无用运算
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

```

###  总结：
* 简单的逻辑加减和运算，电脑的速度是超级强大的！
* 处理好边界条件和有效操作的比重是提升性能的最好办法，效果是十分巨大的。以上为例，没有优化那一步，跑完10W的数字大概需要20秒左右，但加上之后跑完10W只需要1秒
*
