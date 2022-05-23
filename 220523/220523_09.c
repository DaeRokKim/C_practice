# include <stdio.h>

// 증감 연산자 위치에 따른 차이

int main() {
		int num1 = 2;
		int num2 = 2;
		int num3, num4, num5, num6;
		
		// 증감 연산자가 앞일 때
		num3 = num1++;
		num4 = num2--;

		num1 = 2;
		num2 = 2;

	  // 증감 연산자가 뒤일 때
		num5 = ++num1;
		num6 = --num2;
		
		printf("%d %d\n", num3, num4);
		printf("%d %d\n", num5, num6);

		return 0;
}
