#include<stdio.h>

void DFS(int);
int g[10][10],n,visited[10];

int main(){
    int i,j;
    clrscr();
    printf("Enter the number of vetices  : \n");
    scanf("%d",&n);

    printf("Enter the adjacency matrix of the graph : \n ");
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    scanf("%d",&g[i][j]);

    for(i=1;i<=n;i++)
    visited[i] = 0 ;
    printf("DFS : \n");
    DFS(1);
    getch();
    return 0;
}
void DFS(int i )
{
    int j;
    printf(" %d ",i);

    visited[i] = 1;
    for(j=1;j<=n;j++)
    if(!visited[j] && g[i][j]==1)
    DFS(j);
}