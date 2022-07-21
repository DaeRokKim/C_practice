#include <stdio.h>

int main()
{
  int word;
  const char *errPrint = "알파벳만 넣으라고";

  while (1)
  {
    word = getchar();
    if (word >= 65 && word <= 90)
    {
      word += 32;
    }
    else if (word >= 97 && word <= 122)
    {
      word -= 32;
    }

    if (word < 65 || word > 122)
    {
      puts("\n알파벳만 넣으라고 하...\n");
      return -1;
    }

    if (word == EOF)
      break;

    putchar(word);
  }

  return 0;
}

// 알파벳 이외에 다른 걸 입력하면 에러가 발생하는 코드를 작성하라고 했는데
// 영 어떻게 하는지 모르겠네