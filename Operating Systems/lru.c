#include<stdio.h>

int main()
{
    int n,f,p[20],fr[10],time[10];
    int i,j,min,pos,hit,pf=0;

    printf("Enter no of pages: ");
    scanf("%d",&n);

    printf("Enter page reference string: ");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    printf("Enter no of frames: ");
    scanf("%d",&f);

    for(i=0;i<f;i++)
    {
        fr[i]=-1;
        time[i]=0;
    }

    printf("\nPage\tFrames\n");

    for(i=0;i<n;i++)
    {
        hit=0;

        for(j=0;j<f;j++)
        {
            if(fr[j]==p[i])
            {
                hit=1;
                time[j]=i;
                break;
            }
        }

        if(!hit)
        {
            min=999;
            pos=0;

            for(j=0;j<f;j++)
            {
                if(fr[j]==-1)
                {
                    pos=j;
                    break;
                }

                if(time[j]<min)
                {
                    min=time[j];
                    pos=j;
                }
            }

            fr[pos]=p[i];
            time[pos]=i;
            pf++;
        }

        printf("%d\t",p[i]);

        for(j=0;j<f;j++)
        {
            if(fr[j]==-1)
                printf("- ");
            else
                printf("%d ",fr[j]);
        }

        printf("\n");
    }

    printf("\nPage Faults = %d",pf);

    return 0;
}
