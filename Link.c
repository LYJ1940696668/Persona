#include <stdio.h>
#define MaxSize 10
/*
顺序表插入元素
Sqlist ：表首地址
*len :表长度
i：插入元素位置
x：插入元素值
*/
void inserElem(int Sqlist[],int *len,int i,int x)
{
    int t;
    if(*len == MaxSize || i < 1|| i > *len + 1)
    {
        printf("This insert is illegal\n");
        return;
    }
    for(t=*len-1;t >= i-1; t--)
    {
        Sqlist[t+1] = Sqlist[t];
    }
    Sqlist[i-1] = x;
    *len = *len + 1;
}

/*
顺序表删除元素
Sqlist：表首地址
*len：表长度
i：插入位置
*/
void DelElem(int Sqlist[],int *len, int i)
{
    int j;
    if(i < 1 || i > *len)
    {
        printf("This insert is a illegal\n");
    }
    for(j=i; j<=*len-1;j++)
        Sqlist[j-1] = Sqlist[j];
    *len = *len-1;
}

int main(void)
{
    int Sqlist[MaxSize];
    int len;
    int i;
    for(i = 0;i <= 5;i ++)
        scanf("%d ",&Sqlist[i]);
    len = 6;
    for(i = 0;i < len;i ++)
        printf("%d ",Sqlist[i]);
    printf("\nThe spare lenth is %d\n",MaxSize - len);

    inserElem(Sqlist,&len,3,0);
    for(i = 0;i < len;i ++)
        printf("%d ",Sqlist[i]);
    printf("\nThe spare lenth is %d\n",MaxSize - len);

    inserElem(Sqlist,&len,11,0);
    DelElem(Sqlist,&len,6);
    for(i = 0;i < len;i ++)
        printf("%d ",Sqlist[i]);
    printf("\nThe spare lenth is %d\n",MaxSize - len);

}