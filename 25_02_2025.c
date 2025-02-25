#include <stdio.h>
int a = 5;
int b = 10;
void swap(int*a,int *b) {
	*a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main() {
	swap(&a, &b); 
	printf("%i , %i", a, b);

}