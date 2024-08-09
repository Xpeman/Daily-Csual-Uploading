#define _CRT_SECURE_NO_WARNINGS
/*
# 有一门课不及格的学生

## 题目描述

给出一名学生的语文、数学、英语成绩，判断他是否恰好有一门课不及格（成绩小于 $60$ 分）。若该学生恰好有一门成绩不及格输出 $1$，否则输出 $0$。

## 输入格式

一行包含三个 $0 \sim 100$ 之间的整数，分别表示该生的语文、数学、英语成绩。

## 输出格式

该学生恰好有一门成绩不及格输出 $1$，否则输出 $0$。

## 样例 #1

### 样例输入 #1

```
59 60 61
```

### 样例输出 #1

```
1
```

## 样例 #2

### 样例输入 #2

```
59 50 59
```

### 样例输出 #2

```
0
```

## 样例 #3

### 样例输入 #3

```
100 100 90
```

### 样例输出 #3

```
0
```
*/
#include <stdio.h>
int main()
{
    int mark = 0;   //分数
    int record = 0; //记录器
    while (scanf("%d", &mark) != EOF) //输入成绩
    {
        if (mark < 60)
        {
            record++;
        }
    }
    if (record == 1) //记录器只有1次
        printf("1\n");
    else
        printf("0\n");
    return 0;
}