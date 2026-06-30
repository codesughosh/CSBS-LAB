#include<stdio.h>

int main()
{
    int n,i,p[20],at[20],bt[20],wt[20],tat[20],done[20]={0};
    int t=0,c=0,min,k;
    float aw=0,atat=0;

    printf("Enter no of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        p[i]=i+1;
        printf("P%d AT BT: ",i+1);
        scanf("%d%d",&at[i],&bt[i]);
    }

    printf("\nP\tAT\tBT\tWT\tTAT\n");

    while(c<n)
    {
        min=999;
        k=-1;

        for(i=0;i<n;i++)
        {
            if(!done[i] && at[i]<=t && bt[i]<min)
            {
                min=bt[i];
                k=i;
            }
        }

        if(k==-1)
        {
            t++;
            continue;
        }

        wt[k]=t-at[k];
        t+=bt[k];
        tat[k]=wt[k]+bt[k];

        done[k]=1;
        c++;

        aw+=wt[k];
        atat+=tat[k];

        printf("P%d\t%d\t%d\t%d\t%d\n",
               p[k],at[k],bt[k],wt[k],tat[k]);
    }

    printf("\nAvg WT = %.2f",aw/n);
    printf("\nAvg TAT = %.2f",atat/n);

    return 0;
}
