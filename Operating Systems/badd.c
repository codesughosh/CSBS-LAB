#include<stdio.h>

int main()
{
    int n,m,i,j,k;
    int alloc[10][10],req[10][10],avail[10];
    int finish[10]={0},seq[10],count=0,found;

    printf("Enter Processes and Resources: ");
    scanf("%d%d",&n,&m);

    printf("Enter Allocation Matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&alloc[i][j]);

    printf("Enter Request Matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&req[i][j]);

    printf("Enter Available Resources:\n");
    for(i=0;i<m;i++)
        scanf("%d",&avail[i]);

    while(count<n)
    {
        found=0;

        for(i=0;i<n;i++)
        {
            if(finish[i]==0)
            {
                for(j=0;j<m;j++)
                    if(req[i][j]>avail[j])
                        break;

                if(j==m)
                {
                    for(k=0;k<m;k++)
                        avail[k]+=alloc[i][k];

                    finish[i]=1;
                    seq[count++]=i;
                    found=1;
                }
            }
        }

        if(found==0)
            break;
    }

    if(count==n)
    {
        printf("\nNo Deadlock");
        printf("\nSafe Sequence: ");

        for(i=0;i<n;i++)
            printf("P%d ",seq[i]);
    }
    else
    {
        printf("\nDeadlock Detected\nProcesses: ");

        for(i=0;i<n;i++)
            if(finish[i]==0)
                printf("P%d ",i);
    }

    return 0;
}
