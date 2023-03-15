#include <stdio.h>

int main()
{
    int n, i, a, low, high, mid;
    printf("Masukkan angka yang diinginkan untuk jumlah elemen : ");
    scanf("%d", &n);
    int array[n];
    printf("Masukkan elemen berupa angka urut maupun acak :\n");
    for(i=0;i<n;i++);
        scanf("%d", &array[i]);
    printf("Masukkan nilai untuk ditemukan pada lokasi tertentu : ");
    scanf("%d", &a);
    low=0;
    high=n-1;
    mid=(low+high)/2;

    while(low<=high){
        if(array[mid]<a)
            low=mid+1;
        else if(array[mid]==a){
            printf("%d ditemukan pada lokasi %d.",a, mid+1);
            break;
        }
        else
            high=mid-1;
            mid=(low+high)/2;
    }
    if(low>high)
        printf("%d tidak ada dalam array atau pointer.", a);

    return 0;
}
