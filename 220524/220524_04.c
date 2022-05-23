// 삼항 연산자
# include <stdio.h>

int main() {
		int num1 = 5;
		int num2;
		int num3;

		num2 = num1 ? 100 : 200; // 참이면 100, 거짓이면 200
		num3 = num1 == 10 ? 100: 200;
		
		printf("%d\n", num2);
		printf("%d\n", num3);

		return 0;
}

