#include <stdio.h>

#define Maxsize 10

void InsertElem(int Sqlist[],int *len,int addr,int x)
{
    int i;
    if(i < 1 || i > *len || *len == Maxsize)
    {
        printf("This insert is illegal\n");
        return;
    }
    for(i = *len-1; i >= addr - 1;i --)
        Sqlist[i + 1] = Sqlist[i];
    Sqlist[addr - 1] = x;
    *len = *len + 1;
}

void DelElem(int Sqlist[],int *len,int addr)
{
    int i;
    if(i < 1 || i > *len)
    {
        printf("This insert is illegal\n");
        return;
    }
    for(i = addr -1;i < *len - 1; i ++ )
        Sqlist[i] = Sqlist[i+1];
    *len = *len - 1;
}

int main(void)
{
    int Sqlist[Maxsize];
    int len;
    int i;

    printf("enter six number\n");
    len = 6;
    for(i = 0;i < len; i ++)
        scanf("%d",&Sqlist[i]);

    for(i = 0;i < len; i ++)
        printf("%d ",Sqlist[i]);
    printf("\n The space length is %d\n",Maxsize - len);
    
    InsertElem(Sqlist,&len,3,0);
    for(i = 0;i < len; i ++)
        printf("%d ",Sqlist[i]);
    printf("\n The space length is %d\n",Maxsize - len);

    InsertElem(Sqlist,&len,11,0);
    DelElem(Sqlist,&len,6);
    for(i = 0;i < len; i ++)
        printf("%d ",Sqlist[i]);
    printf("\n The space length is %d\n",Maxsize - len);

}