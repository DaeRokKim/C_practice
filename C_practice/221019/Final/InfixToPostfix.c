#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ListBaseStack.h"

int GetOpPrec(char op)
{
   switch (op)
   {
   case '*':
   case '/':
      return 5;

   case '+':
   case '-':
      return 3;

   case '(':
      return 1;
   }

   return -1;
}

int WhoPrecOp(char op1, char op2)
{
   int op1prec = GetOpPrec(op1);
   int op2prec = GetOpPrec(op2);

   if (op1prec > op2prec)
   {
      return 1;
   }
   else if (op1prec < op2prec)
   {
      return -1;
   }
   else
   {
      return 0;
   }
}

void ConvToRPNExp(char exp[])
{
   Stack stack;
   int expLen = strlen(exp);
   char *convExp = (char *)malloc(sizeof(expLen + 1));

   int i, idx = 0;
   char tok, popOp;

   memset(convExp, 0, sizeof(char) * expLen + 1);
   StackInit(&stack);

   for (i = 0; i < expLen; i++)
   {
      tok = exp[i];

      if (isdigit(tok))
      {
         convExp[idx++] = tok;
      }
      else
      {
         switch (tok)
         {

         case '(':
            SPush(&stack, tok);
            break;

         case ')':
            while (1)
            {
               popOp = SPop(&stack);
               if (popOp == '(')
                  break;
               convExp[idx++] = popOp;
            }
            break;

         case '+':
         case '-':
         case '*':
         case '/':
            while (!SIsEmpty(&stack))
               convExp[idx++] = SPop(&stack);
            SPush(&stack, tok);
            break;
         }
      }
   }

   while (!SIsEmpty(&stack))
   {
      convExp[idx++] = SPop(&stack);
   }
   strcpy(exp, convExp);
   free(convExp);
}