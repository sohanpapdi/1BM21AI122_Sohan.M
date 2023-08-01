#include<stdio.h>
struct Searching
{
    int *a;
    int key;
};

int fillArr(struct Searching S)
{
    int n;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    S.a=calloc(n+1,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the %d element:",(i+1));
        scanf("%d",&S.a[i]);
    }
    return n;
}
void sortArr(struct Searching S)
{
    int n=fillArr(S),temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(S.a[i]>S.a[j])
            {
                temp=S.a[j];
                S.a[j]=S.a[i];
                S.a[i]=temp;
            }
        }
    }
}
void K(struct Searching S)
{
    printf("\nEnter Key");
    scanf("%d",&S.key);
}

void LS(struct Searching S)
{

    int n = fillArr(S);
    int flag=0,i;
    K(S);
    for(i=0;i<n;i++)
    {
        if(S.a[i]==S.key)
            {
                flag=1;
                break;
            }
    }
    if(flag)
        printf("\nElement found at %d position",i);
    else
        printf("\nElement not found");

}
void BS(struct Searching S)
{
    sortArr(S);

    int M,L=0,U=fillArr(S)-1,flag=0;
    K(S);
    while(L<=U)
    {
        M=(L+U)/2;
        if(S.a[M]==S.key)
        {
            flag=1;
            break;
        }

        else if(S.a[M]>S.key)
            {
                L=M+1;
            }
        else
        {
            U=M-1;
        }
    }
    if(flag)
        printf("\nElement present at %d position:",M);
    else
        printf("\nElement not present");

}
void main()
{
    struct Searching S;
    int choice;
    while(1)
    {
        printf("\nSearching techniques");
        printf("\n1.Linear Search");
        printf("\n2.Binary Search");
        printf("\n3.Exit");
        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: LS(S);
                    break;
            case 2: BS(S);
                    break;
            case 3: printf("\nExiting...");
                    exit(0);
                    break;
            default:printf("\nEnter valid choice!");
                    break;
        }
    }
}
