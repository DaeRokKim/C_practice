// 삼항 연산자 논리 연산자

# include <stdio.h>

int main() {
		int num1 = 1;
		int num2 = 0;

		printf("%s\n", num1 && num2 ? "참" : "거짓");
		printf("%s\n", num1 || num2 ? "참" : "거짓");

		return 0;
}
