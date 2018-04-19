#include<stdio.h>
#include<stdlib.h>
#include<time.h>      // thu vien de khoi tao tham so cho ham rand()
#define swap(type, a, b) {type temp = a; a = b; b = temp; } // hang hoan vi
 
void quickSort(int *a, int l, int r)
{
    srand(time(NULL));  //khoi tao tham so ham rand()
    int key = a[l + rand() % (r-l+1)];  //lay khoa la gia tri ngau nhien tu a[l] -> a[r]
    //int key = a[(l+r)/2];
    int i = l, j = r;
 
    while(i <= j)
    {
        while(a[i] < key) i++;       // tim phan tu ben trai ma >=key
        while(a[j] > key) j--;       // tim phan tu ben trai ma <=key
        if(i <= j)
        {
            if (i < j)
                swap(int, a[i], a[j]);  // doi cho 2 phan tu kieu int a[i], a[j].
            i++;
            j--;
        }
    }
    //bay gio ta co 1 mang : a[l]....a[j]..a[i]...a[r]
    if (l < j) quickSort(a, l, j);   // lam lai voi mang a[l]....a[j]
    if (i < r) quickSort(a, i, r); // lam lai voi mang a[i]....a[r]
}
 
int main ()
{
    int i, arr[] = { 40, 10, 100, 90, 20, 25 };
    quickSort(arr, 0, 5);
    for (i=0; i<6; i++)
        printf ("%d ", arr[i]);
    return 0;
}
