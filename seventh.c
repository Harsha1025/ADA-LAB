#include<stdio.h>
#include<conio.h>


void quicksort(int a[], int low,int high);

int main()
{
    int a[10],n,i;
    clrscr();
    printf("\n Enter number of elements : ");
    scanf("%d",&n);
    printf("\n enter elements : ");

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("\n after sorting : ");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);

    getch();
    return 0;
}
void quicksort(int a[], int low ,int high)
{
    int i,j,piv,temp;
    i=low+1;
    piv=low;
    j=high;
    if(low<high)
    {
        while (low <= high)
        {
            /* code */
            
            while(a[i]<a[piv] && i <= high)
            i++;
            while(a[j]>a[piv] && j >low)
            j--;
            
            if(i<j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else{
                temp = a[low];
                a[low] = a[j];
                a[j] = temp;
                break;
            }
        }
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}