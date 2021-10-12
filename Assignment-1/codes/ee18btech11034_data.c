#include <stdio.h>
int main ()
{
    /*Initializing the other vector*/
	double arr[] = {1,2,3,4,5,6,7,8,9,0,1,2,5}, *ip = arr + 4;
    int len = sizeof(arr)/sizeof(arr[0]);
    double e5[len];
    for(int i=0;i<len;i++){
        e5[i] = 0;
    }
    int index = (ip+1 - arr);
    e5[index] = 1;

    FILE *fo1,*fo2;
    /*Loading the data into dat files*/
    fo1  = fopen("../files/A.dat", "w");
    
    for(int i = 0; i < len; i++)
    {
        fprintf(fo1, "%lf\n",arr[i]);
    }
    
    fclose(fo1);
    fo2  = fopen("../files/e5.dat", "w");
    
    for(int i = 0; i < len; i++)
    {
        fprintf(fo2, "%lf\n",e5[i]);
    }
    
    fclose(fo2);
	return 0;
}

