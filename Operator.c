/*
* xor �����ڰ� �򰥷��� �ۼ��ϴ� �ڵ�
*/

#include <stdio.h>

int main() {
	int arr1[] = { 0,1,0,1 };
	int arr2[] = { 0,0,1,1 };
	for (int i = 0; i < 4; i++) {
		printf("%d %d : %d\n", arr1[i], arr2[i], arr1[i] ^ arr2[i]);
	}
	return 0;
}