#include <iostream>
using namespace std;

long sumf(long arr[], int index, int length)
{
    if(index == length)
        return 0;
    return arr[index] + sumf(arr, index + 1, length);
}

int sumb(int arr[], int index)
{
    if(index == 0)
        return 0;
    return arr[index - 1] + sumb(arr, index - 1);
}

int main(void)
{
    int length = 1000;
    long arr[length];
    for(long i = 0; i < length; ++i)
        arr[i] = i;
    int s1, s2, s3;
    //s1 = sumf(arr, 0, length);
    //s2 = sumb(arr, length);
    s3 = 0;
    for(int i = 0; i < length; ++i)
        s3 += arr[i];
    cout << "forward recursive:\t" << s3 << endl;
    //    << "backwards recursive:\t" << s2 << endl
    //    << "iterative sum:\t\t" << s3 << endl;

    return 0;
}
