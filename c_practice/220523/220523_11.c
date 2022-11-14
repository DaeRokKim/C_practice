// 곱셈 나눗셈

# include <stdio.h>

int main() {
		int num1, num2;
		float num3, num4;

		num1 = 2*3;
		num2 = 7/2;

		printf("%d\n", num1);
		printf("%d\n", num2); // 결과가 3이 나온다 정수형이기 때문에

		num3 = 2.73f * 3.81f;
		num4 = 7.0f / 2.0f;

		printf("%f\n", num3);
		printf("%f\n", num4);
		
		return 0;
}
