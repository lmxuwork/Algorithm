/*************************************************************************
	> File Name: insertion_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/21 17:38:14 2017
 ************************************************************************/

#include<iostream>
using namespace std;

void insertion_sort(int* a,int len)
{
    int i = 0;
    for (int j = 1; j < len; ++j)
    {
        int key = a[j];
        i = j - 1;
        while(i >= 0 && a[i] > key){
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = key;
    }

}
void print_array(int* a, int len)
{
    cout<<"\n a = ";
    for(int i = 0; i < len; ++i)
    {
        cout<<a[i] << " ";
    }
    cout<<"\n";
}

int main()
{
    int a[10] = {2,31,1,3,23,44,55,14,20,3};
    print_array(a,10);
    insertion_sort(a,10);
    print_array(a,10);

    return 0;
}
