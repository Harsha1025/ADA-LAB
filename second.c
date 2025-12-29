#include<stdio.h>

int main() {
    int n, cap, w[10], p[10], i;
    float profit = 0;
    clrscr();

    printf("Items & Capacity: ");
    scanf("%d%d", &n, &cap);

    printf("Weights: ");
    for(i=0; i<n; i++) scanf("%d", &w[i]);

    // Note: Inputs must be pre-sorted by Profit/Weight ratio
    printf("Profits: ");
    for(i=0; i<n; i++) scanf("%d", &p[i]);

    for(i=0; i<n; i++) {
        if(w[i] <= cap) {
            // Take full item
            cap -= w[i];
            profit += p[i];
        } else {
            // Take fraction of item
            profit += (float)p[i] * cap / w[i];
            break; // Bag is full
        }
    }

    printf("Max Profit: %.2f", profit);
    getch();
    return 0;
}