// 논리 연산자
# include <stdio.h>

int main() {
		// AND 연산자
		printf("%d\n", 1 && 1); // 참
		printf("%d\n", 1 && 0); // 거짓
		printf("%d\n", 0 && 1); // 거짓
		printf("%d\n", 0 && 0); // 거짓

		// OR 연산자
		printf("%d\n", 1 || 1); // 참
		printf("%d\n", 1 || 0); // 참
		printf("%d\n", 0 || 1); // 참
		printf("%d\n", 0 || 0); // 거짓

		// NOT 연산자
		printf("%d\n", !1); // 참의 not은 거짓
		printf("%d\n", !0); // 거짓의 not은 참

		return 0;
}
