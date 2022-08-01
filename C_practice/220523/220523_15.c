# include <stdio.h>
# include <string.h>

int main() {
		int i, k;
		char str[30];

		scanf("%s", str);
		k = strlen(str);

		for (i=k-1; i>=0; i--){
				printf("%c", str[i]);
		}
}
