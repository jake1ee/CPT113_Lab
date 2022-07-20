
#include <iostream>
using namespace std;


void quicksort(int[], int, int);
int partition(int[], int, int);
void swap(int&, int&);

int main()
{
    int array[10] = {7, 3, 9, 2, 0, 1, 8, 4, 6, 5};
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    quicksort(array, 0, 10 );

    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}


void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int a[], int p, int r)
{
    int pivotvalue, pivotindex, mid;

    mid = (p+ r) / 2;
    swap(a[p], a[mid]);
    pivotindex = p;
    pivotvalue = a[p];

    for (int j = p+1; j <= r - 1; j++)
    {
        if (a[j] <= pivotvalue)
        {
            pivotindex++;
            cout << "swap value" << a[pivotindex]<<" and"<< a[j]<< endl;
            swap(a[pivotindex], a[j]);
        }
    }
    cout << pivotindex << endl;
    swap(a[p], a[pivotindex]);
    return pivotindex;
}

void quicksort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = partition(a, p, r);
        for (int i = 0; i < r; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << q <<endl<< endl;

        cout << "quicksort for" << p << q - 1 << endl;
        quicksort(a, p, q - 1);
        for (int i = 0; i < r; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        cout << "quciksort for " << q + 1 << r << endl;
        quicksort(a, q + 1, r);
        for (int i = 0; i < r; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "done function for" << p << r << endl;
    }
}