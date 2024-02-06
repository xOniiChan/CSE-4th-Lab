#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

const int n = 1000;

void bubble_sort(int *a, int num)
{
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int Partition(int *a, int p, int q)
{
    int pov = a[q];
    int i = p - 1;
    for (int j = p; j < q; j++)
    {
        if (a[j] <= pov)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[q]);
    return i + 1;
}

void quick_sort(int *a, int i, int j)
{
    if(i < j)
    {
        int m = Partition(a, i, j);
        quick_sort(a, i, m - 1);
        quick_sort(a, m + 1, j);
    }
}

int main()
{
    clock_t start, stop;
    int *array1 = new int[n];
    for(int i = 0; i < n; array1[i] = rand(), i++);

    start = clock();
    bubble_sort(array1, n);
    stop = clock();

    cout << "For " << n << " elements\nBubble sort: " << ((double)(stop - start)) / CLOCKS_PER_SEC;

    start = clock();
    quick_sort(array1, 0, n - 1);
    stop = clock();

    cout << "\nQuick sort: " << ((double)(stop - start)) / CLOCKS_PER_SEC << " seconds" << endl;

    delete[] array1; g

    return 0;
}
