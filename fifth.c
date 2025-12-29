#include<stdio.h>

int g[10][10],vis[10],q[10],n,i,j,f=0,r=-1;

int main( ){

    clrscr();
    printf("Enter the vetices : \n");
    scanf("%d",&n);

    printf("Enter the adjacency matrix of graph : \n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&g[i][j]);

            q[++r] = 1;
            vis[1] = 1;

        printf("BSF : ");


        while( f <= r)
{
    i = q[f++];
    printf("%d ",i);

    for(j=1;j<=n;j++){
        if(g[i][j]== 1 && vis[j]==0){
            q[++r]=j;
            vis[j]=1;
        }
    }
}
getch();
return 0;
}