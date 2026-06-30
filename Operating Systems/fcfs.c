#include<stdio.h>

int main()
{
    int n,i,j,p[20],at[20],bt[20],wt[20],tat[20],t=0,temp;
    float aw=0,atat=0;

    printf("Enter no of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        p[i]=i+1;
        printf("P%d AT BT: ",i+1);
        scanf("%d%d",&at[i],&bt[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(at[i]>at[j])
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;

                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }

    printf("\nP\tAT\tBT\tWT\tTAT\n");

    for(i=0;i<n;i++)
    {
        if(t<at[i])
            t=at[i];

        wt[i]=t-at[i];
        tat[i]=wt[i]+bt[i];
        t+=bt[i];

        aw+=wt[i];
        atat+=tat[i];

        printf("P%d\t%d\t%d\t%d\t%d\n",p[i],at[i],bt[i],wt[i],tat[i]);
    }

    printf("\nAvg WT = %.2f",aw/n);
    printf("\nAvg TAT = %.2f",atat/n);

    return 0;
}
