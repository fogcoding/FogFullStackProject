## 题目：有30个人，其中有男人，女人和小孩，在一家饭馆吃饭，共花费50先令，每个男人花费3先令，每个女人花费2先令，每个小孩花费1先令，问男人，女人，小孩各有几人？

## 穷举法
* 穷举复合条件的每种人的数目，分别去尝试，是否符合共花费50先令的约束条件

## 穷举法的实现思想分析
* 思路一：模拟进制（30进制不断减少）
* 思路二：设置2个变量，分别递增，并由30减去两个变量得到第三个变量数值，再去判定是否符合条件


## 穷举法可能出现的问题

* 思路一的问题：

* 只有最开始的时候，是符合30进制的，后期的进制变化的调整，本身就是是十分复杂的问题  

* 思路二的问题：

* 需要处理边界值和数据的不合理之和溢出情况

### 实现代码（C）
```
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

```
