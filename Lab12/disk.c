//http://www.cs.iit.edu/~cs561/cs450/disksched/disksched.html

#include<stdio.h>
#include<stdlib.h>

void sstf();
void fcfs();
void scan();
void clook();

int *a,b[20],d,n,i,j,temp,s,k=0,x=0,t=0;

void main()
{
//    int *a,b[20],d,n,i,j,temp,s,k=0,x=0,t=0;
    int ch;
    printf("\nEnter number of processes:");
    scanf("%d",&n);
    a=(int*)malloc((n+1)*sizeof(int));
    printf("Enter head pointer position:");
    scanf("%d",a);
    printf("\nEnter processes in request order:");
    for(i=1;i<=n;i++)scanf("%d",(a+i));    
    printf("\n\tMENU (Assume disk size = 200)\n1) FCFS\n2) SSTF\n3) SCAN\n4) CLOOK\nEnter choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:fcfs();break;
        case 2:sstf();break;
        case 3:scan();break;
        case 4:clook();break;
    }
    printf("\nProcessing order:");
    for(i=0;i<=n;i++)printf("\n%d",b[i]);
    printf("\n");
           printf("\nTotal Head Movement:%d\n",t);
}

void fcfs()
{
    b[k++]=*a;
    for(i=1;i<=n;i++)
    {
        if(*(a+i)>*(a+i+1))
		d=(int)(*(a+i)-*(a+i+1));
        else 
		d=(int)(*(a+i+1)-*(a+i));
        b[k++]=*(a+i);
        t+=d;
    }
}

void sstf()
{
    b[k++]=*a;
    for(i=0;i<n;i++)
    {
        s=1000;
        for(j=i+1;j<=n;j++)
        {
            if(*(a+i)>*(a+j))d=(int)(*(a+i)-*(a+j));
            else d=(int)(*(a+j)-*(a+i));
            if(d<s)
            {
                s=d;
                x=j;
            }
        }
        t+=s;
        temp=*(a+i+1);
        *(a+i+1)=*(a+x);
        *(a+x)=temp;
        b[k++]=*(a+i+1);
    }
}

void scan()
{
    int head=*a;
    int p=0;
    b[k++]=*a;
    for(i=0;i<=n;i++)
    for(j=0;j<=n-i-1;j++)
    if(*(a+j)>*(a+j+1))
    {
        temp = *(a+j);
        *(a+j)=*(a+j+1);
        *(a+j+1)=temp;
        if(*(a+j+1)==head)p=j+1;
    }
    for(i=p-1;i>=0;--i)
    {
        if(*(a+i)>*(a+i+1))d=(int)(*(a+i)-*(a+i+1));
        else d=(int)(*(a+i+1)-*(a+i));
        b[k++]=*(a+i);
        t+=d;
    }
    t+=*a;
    t+=*(a+p+1);
    for(i=p+1;i<=n;i++)
    {
        if(*(a+i)>*(a+i+1))d=(int)(*(a+i)-*(a+i+1));
        else d=(int)(*(a+i+1)-*(a+i));
        b[k++]=*(a+i);
        t+=d;
    }
}

void clook()
{
    int head=*a;
    int p=0;
    b[k++]=*a;
    for(i=0;i<=n;i++)
    for(j=0;j<=n-i-1;j++)
    if(*(a+j)>*(a+j+1))
    {
        temp = *(a+j);
        *(a+j)=*(a+j+1);
        *(a+j+1)=temp;
        if(*(a+j+1)==head)p=j+1;
    }
    for(i=p-1;i>=0;--i)
    {
        if(*(a+i)>*(a+i+1))d=(int)(*(a+i)-*(a+i+1));
        else d=(int)(*(a+i+1)-*(a+i));
        b[k++]=*(a+i);
        t+=d;
    }
    t+=*a;
    t+=(int)(199-*(a+n+1));
    for(i=n;i>p;--i)
    {
        if(*(a+i)>*(a+i+1))d=(int)(*(a+i)-*(a+i+1));
        else d=(int)(*(a+i+1)-*(a+i));
        b[k++]=*(a+i);
        t+=d;
    }
}

