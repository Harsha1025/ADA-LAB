#include <stdio.h>

// Matrix, Visited array, Total Cost
int m[4][4]={{0,10,0,20},{5,0,0,10},{0,13,0,12},{8,8,9,0}}, v[4], c=0;

void tsp(int p) {
    int i, next = -1, min = 999;
    v[p] = 1; 
    printf("%d ", p + 1);
    
    // Find nearest unvisited neighbor
    for(i = 0; i < 4; i++)
        if(m[p][i] && !v[i] && m[p][i] < min) 
            min = m[p][next = i];

    // If path found, recurse; else return to start
    if(next != -1) { 
        c += min; 
        tsp(next); 
    } else { 
        c += m[p][0]; 
        printf("1"); 
    }
}

int main() {
    clrscr();
    printf("Shortest Path: ");
    tsp(0);
    printf("\nMinimum Cost: %d", c);
    getch();
    return 0;

}