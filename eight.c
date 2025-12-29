#include<stdio.h>
#include<conio.h>


int main(){
    int i,j,n,e;
    int adjacencyMatrix[10][10] = {0};
    clrscr();

    printf("Enter the number of vertices  : ");
    scanf("%d",&n);

    printf("Enter the number of edges : ");
    scanf("%d",&e);

    printf("\n enter the edges (format : source destination ):\n");
    for(i=1;i<=e;i++)
    {
        int src,dest;
        scanf("%d %d",&src,&dest);
        adjacencyMatrix[src][dest]=1;
        adjacencyMatrix[dest][src] = 1;
    }
    printf("\n Adjacency Matrix : \n ");
    for(i=1;i<=n;i++){

        for(j=1;j<=n;j++){

            printf("%d ", adjacencyMatrix[i][j]);
        }printf("\n");
    }
    getch();
    return 0;
}