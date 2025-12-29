#include<stdio.h>


int c[10][10], p[10],n,i,j,ne=1,min,a,b,u,v,mincost=0;

int find(int i ){
    while(p[i])
    i = p[i];
    return i;
}

int main ()
{
    clrscr();
    printf("Enter the no. of Vertices : ");
    scanf("%d",&n);
    printf("Enter the cost adjacency matrix Matrix: \n");

    for(i=1; i<=n;i++)
    for(j=1;j<=n;j++){
        scanf("%d",&c[i][j]);
        if(c[i][j] == 0 )
        c[i][j] = 999;
    }
    printf("\n MST Edges : \n");

    while(ne < n)
    {
        for(i=1,min=999;i <= n; i++)
            for(j=1;j<=n;j++)
                if(c[i][j] < min){
                    min = c[i][j];
                    a = u = i;
                    b = v = j;
                }
            u = find(u);
            v = find(v);

        if(u != v){
            p[v] = u;
            ne++;
             mincost += min;
             printf("Edge of Minimum cost spanning tree are : (%d,%d) = %d\n",a,b,min);
        }
        c[a][b] = c[b][a] = 999;
    }
    printf("\n Minimum Cost = %d", mincost);
    getch();
    return 0;

}