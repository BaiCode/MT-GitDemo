#include <stdio.h>
int main(){
	 int arr[] = {1,2,3,4,5,6,7,8};
	 int length = (sizeof arr)/4;
	 int i;
	 for(i=0;i<length;i++){
	 	printf("%d\n",arr[i]);
	}
	printf("Hlleo\n");
	return 0;
}