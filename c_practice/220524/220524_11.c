// stdbool.h 헤더파일 사용하기
// 불 자료형
// 불 자료형과 논리 연산자 같이 사용하기

# include <stdio.h>
# include <stdbool.h>

int main() {
		bool b1 = true;

		if (b1 == true) {
				printf("참\n");
		} else {
				printf("거짓\n");
		}

		printf("%d\n", true && true);
		printf("%d\n", true && false);
		printf("%d\n", false && true);
		printf("%d\n", false && false);

		printf("%d\n", true || true);
		printf("%d\n", true || false);
		printf("%d\n", false || true);
		printf("%d\n", false || false);

		return 0;
}
