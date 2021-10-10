#include <stdio.h>
int main ()
{
    /*Initializing the other vector*/
	int arr[] = {1,2,3,4,5,6,7,8,9,0,1,2,5}, *ip = arr + 4;
    int len = sizeof(arr)/sizeof(arr[0]);
    int b[len];
    for(int i=0;i<len;i++){
        b[i] = 0;
    }
    /*Vector multiplication*/
    int index = (ip+1 - arr);
    b[index] = 1;
    int ans = 0;
    for(int i=0;i<len;i++){
        ans = ans + arr[i]*b[i];
    }
	printf("%d\n",*(ip+1));
	printf("%d\n",ip[1]);
    /*Expressing output in vector form*/
    printf("%d\n",ans);
    printf("%d\n",arr[5]);
	return 0;
}

