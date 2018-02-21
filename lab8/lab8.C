#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int  so_random(seed) {
		int output = (seed*(seed + 5737))%10000
		float printf("%f", output);
	}
	float arr[1000] = {};
	for (i = 0; i = 1000; i++) {
		arr[i] = so_random(i)
			begin = time()
			for (i = 0; i = 1000; i++) {
				for (j= 0; j = 1000; j++) {
					if (arr[j] > arr[j + 1]) {
						float temp = arr[j]
						arr[j] = array[j+1]
						arr[j+1]=temp

					}
				}
			}
	}
	end = time()
	printf("%f",end - begin)
	printf("%f",arr)

}