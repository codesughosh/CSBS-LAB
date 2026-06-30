#include<stdio.h>

int main()
{
    int n,i,t=0,tq,done=0;
    int at[20],bt[20],rt[20],wt[20],tat[20];
    float aw=0,atat=0;

    printf("Enter no of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("P%d AT BT: ",i+1);
        scanf("%d%d",&at[i],&bt[i]);
        rt[i]=bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d",&tq);

    while(done<n)
    {
        int flag=0;

        for(i=0;i<n;i++)
        {
            if(at[i]<=t && rt[i]>0)
            {
                flag=1;

                if(rt[i]>tq)
                {
                    t+=tq;
                    rt[i]-=tq;
                }
                else
                {
                    t+=rt[i];
                    wt[i]=t-at[i]-bt[i];
                    tat[i]=t-at[i];
                    aw+=wt[i];
                    atat+=tat[i];
                    rt[i]=0;
                    done++;
                }
            }
        }

        if(!flag)
            t++;
    }

    printf("\nP\tAT\tBT\tWT\tTAT\n");

    for(i=0;i<n;i++)
        printf("P%d\t%d\t%d\t%d\t%d\n",
               i+1,at[i],bt[i],wt[i],tat[i]);

    printf("\nAvg WT = %.2f",aw/n);
    printf("\nAvg TAT = %.2f",atat/n);

    return 0;
}
