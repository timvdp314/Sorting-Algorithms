#include <iostream>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}


int main()
{

    int randArray[100], i;
    srand((unsigned)time(0));               //call it once to generate random number
    for (i = 0; i < 100; i++)
        randArray[i] = rand() % 100;        //Generate number between 0 to 99

    for (i = 0; i < 100; i++)
    {
        printf(" %d", randArray[i]);
    }

    std::cout << "\n\nnow these numbers will be sorterd\n\n" << std::endl;

    int n = sizeof(randArray) / sizeof(randArray[0]);
    bubbleSort(randArray, n);
    std::cout << "Sorted array: \n";
    printArray(randArray, n);

    return 0;
}


/*
int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    std::cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
*/
