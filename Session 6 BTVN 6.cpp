#include <stdio.h>

int main(){
	for(int i=0; i<100; i++){
		printf("%d\n", i);
		if(i%3==0 && i%5==0){
			printf("FizzBuzz\n");
			continue;
		}
		if(i%3==0){
			printf("Fizz\n");
			continue;
		}
		if(i%5==0){
			printf("Buzz\n");
			continue;
		}
	}
}
