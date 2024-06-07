#include <stdio.h>
int main()
{
    int a[10] = {9,8,7,6,5,4,3,2,1,0};
    myPrint()
    for(a[i]>a[i+1]){
        if(a[i]>a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    myPrint(a);
}
