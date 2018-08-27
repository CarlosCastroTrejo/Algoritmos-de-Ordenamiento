
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

static void insertionSort(int array[])
{
    
    for(int x=1;x<20;x++)
    {
        int temp=array[x];
        int j=x-1;
        while (array[j]>temp && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    
}

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    int array[20]{};
    
    for(int x=0;x<(sizeof(array)/sizeof(int))-1;x++)
    {
        int random=rand()%100+1;
        array[x]=random;
    }
    
    insertionSort(array);
    cout<<endl<<endl;
    
    for(int x=0;x<(sizeof(array)/sizeof(int))-1;x++)
    {
        cout<<array[x]<<endl;
    }
}


