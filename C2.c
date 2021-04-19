//实验项目性质：设计性
//计划学时：4学时
//一、实验目的
//了解进程调度的概念；理解高响应比优先进程调度算法；通过本实验以加深对进程调度的理解。非抢占式作业调度，当进程失去处理机即计算各个进程的响应比。
//二、预习与参考
//预习《3.1节 处理机调度的基本概念 3.2节 调度算法》内容。
//三、实验器材
//配置网络环境的计算机系统，安装有turbo C或其它高级编程语言。
//四、实验内容
//．用高级语言设计PCB结构
#include <iostream>
using namespace std;
typedef struct Hresponse{
    Char PrecessName[20];
    float servertime;
    float reachtime;
    struct Hresponse *next
}
void Hresponse_Input(Hresponse *L){
Hresponse *P;
Hresponse *Follow;
int i;
char PrecessName [20];
float servertime;
float reachtime ;
i=1;
Follow=L;
printf("servertime reachtime end to finsh")
while (strcmp (PrecessName,"end")
{
    printf ("the %d precessNmae  \n\n",i);
    P=(Hresponse*)malloc(sizeof(Hresponse
    ));
    if(!P){return ;}
    printf("PrecessName :");
    scanf("%s",PrecessName);
    if(!strcmp(PrecessName,"end"))
    {break;}
    strpy(P->PrecessName,PrecessName);
    printf("severtime :");
    scanf ("%f",&severtime);
    P->servertime=servertime ;
    printf ("reachtime:");
    scanf("%f",&reachtime );
    P->reachtime=reachtime;
    Follow->next=P;
    P->next=null;
    Follow =P;
    i++;
}
if (i-1>0)
{
    Hresponse_output(L,i-1);
}

}
