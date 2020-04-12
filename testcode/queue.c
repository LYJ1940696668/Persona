#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0

typedef int Status;
typedef int QElemType;

typedef struct QNode
{
    QElemType data;
    struct QNode *next;    
}QNode,*QueuePtr;

typedef struct 
{
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;
Status InitQueue(LinkQueue Q)
{
    Q.fro

}


/*
#define MAXSIZE 5
stuct queue
{
	int a[MAXSIEZE];
	int front;
	int rear;
};


int main(void)
{
	
}

void en_queue(struct queue *q)
{
	int e;
	if( q -> rear < MAXSIEZE -1 )
	{
		printf("请输入入队元素：");
		scanf("%d",&e);
		q->a[q->rear] = e;
		q->rear ++;
		printf("入队成功\r\n");
	}
	else 
	{
		printf("error\r\n");
	}
}

void de_queue(struct queue *q)
{
	int e;
	if( q->front == q->rear )
	{
		printf("队空，没有元素\r\n");
	}
	else
	{
		e = q->a[a->front];
		q->front ++;
		printf("出队的元素是�?%d\r\n",e);
	}
}*/
