#include <stdio.h>
#include <stdlib.h>
#define MAX 6
struct stack{
	int a[MAX];
	int rear;
	int font;
}s;

void main(void)
{
	int bh;
	int e,i;
	s.rear = 0;
	s.font = 0;
	printf("\n1.入队\n2.出队\n3.打印ӡ\n4.退出\n");
	while (1)
	{
		scanf("%d",&bh);
		switch (bh)
		{
		case 1:
			if((s.rear+1) % MAX == s.font)
			{
				printf("溢出\n");
				break;
			}
			else
			{
				printf("输入入队数据：");
				scanf("%d",&e);
				s.a[s.rear] = e;
				s.rear = (s.rear + 1)%MAX;
			}
			
			break;
		case 2:
			if(s.rear == s.font)
			{
				printf("队列为空\r\n");
				break;
			}
			else{
               e=s.a[s.font];
               s.font=(s.font+1)%MAX;
               printf("出队的元素是%d\n",e);
            }
			break;
		case 3:
			if(s.rear == s.font)
			{
				printf("队列为空\r\n");
			}
			if(s.rear > s.font)
			{
				for(i = s.font;i < s.rear;i ++)
					printf("%d  ",s.a[i]);
			}
			else
			{
				for(i=s.font;i != s.rear;i = (i+1)%MAX)
					printf("%d  ",s.a[i]);
			}
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("输入功能编号有误\n");
			break;
		}
	}
	
}
