# include <stdio.h>

int main() {
		int n1 = 2, n2 = 7;
		int n3 = 2, n4 = 7;

		n1 = n1 * 3;
		n2 = n2 / 2;

		printf("%d %d\n", n1, n2);

		n3 *= 3;
		n4 /= 2;

		printf("%d %d\n", n3, n4);

		return 0;
}
