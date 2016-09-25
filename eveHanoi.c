#include <stdio.h>

void hanoi(int n, char* current, char* carry, char* target) {
	if (n>0) {
		hanoi(n-1,current,target,carry);
		printf("Move disk %d from %s\t to %s.\n",n,current,target);
		hanoi(n-1,carry,current,target);
	}
	return ;
}

int main() {
	hanoi(3, "Left", "Middle", "Right");
}