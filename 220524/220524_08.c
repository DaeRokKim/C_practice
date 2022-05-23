// 조건식과 논리 연산자
// if 조건문과 논리 연산자

# include <stdio.h>

int main() {
		int num1 = 20;
		int num2 = 10;
		int num3 = 30;
		int num4 = 15;

		printf("%d\n", num1 > num2 && num3 > num4); // 1
		printf("%d\n", num1 > num2 && num3 < num4); // 0

		printf("%d\n", num1 > num2 || num3 < num4); // 1
		printf("%d\n", num1 < num2 || num3 < num4); //0

		printf("%d\n", !(num1 > num2)); // 0


		if (num1 && num2) {
				printf("참\n");
		} else {
				printf("거짓\n");
		}

		if (num1 || num2) {
				printf("참\n");
		} else {
				printf("거짓\n");
		}

		if (!num1) {
				printf("참\n");
		} else {
				printf("거짓\n");
		}


		return 0;
}
