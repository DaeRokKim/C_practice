#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
   char *title;
   char *isbn;
   int price;

public:
   Book(char *book_title, char *book_num, int book_price) : price(book_price)
   {
      title = new char[strlen(book_title) + 1];
      isbn = new char[strlen(book_num) + 1];

      strcpy(title, book_title);
      strcpy(isbn, book_num);
   }

   Book(const Book &copy) : price(copy.price)
   {
      title = new char[strlen(copy.title) + 1];
      isbn = new char[strlen(copy.isbn) + 1];
      strcpy(title, copy.title);
      strcpy(isbn, copy.isbn);
   }

   Book &operator=(const Book &ref)
   {
      delete[] title;
      delete[] isbn;

      cout << "Book operator=()" << endl;
      title = new char[strlen(ref.title) + 1];
      isbn = new char[strlen(ref.isbn) + 1];
      strcpy(title, ref.title);
      strcpy(isbn, ref.isbn);
      price = ref.price;

      return *this;
   }

   void ShowBookInfo() const
   {
      cout << "제목 : " << title << endl;
      cout << "ISBN : " << isbn << endl;
      cout << "가격 : " << price << endl;
   }

   ~Book()
   {
      cout << "delete Book" << endl;
      delete[] title;
      delete[] isbn;
   }
};

class EBook : public Book
{
private:
   char *DRMKey;

public:
   EBook(char *book_title, char *book_num, int book_price, char *Key) : Book(book_title, book_num, book_price)
   {
      DRMKey = new char[strlen(Key) + 1];
      strcpy(DRMKey, Key);
   }

   EBook(const EBook &copy) : Book(copy)
   {
      DRMKey = new char[strlen(copy.DRMKey) + 1];
      strcpy(DRMKey, copy.DRMKey);
   }

   EBook &operator=(const EBook &ref)
   {
      Book::operator=(ref);

      delete[] DRMKey;

      DRMKey = new char[strlen(ref.DRMKey) + 1];
      strcpy(DRMKey, ref.DRMKey);
      return *this;
   }

   void ShowEBookInfo() const
   {
      ShowBookInfo();
      cout << "인증키 : " << DRMKey << endl;
   }

   ~EBook()
   {
      cout << "delete EBook" << endl;
      delete[] DRMKey;
   }
};

int main()
{
   cout << "Book1" << endl;
   Book book1("Good C++", "555-12345-890-0", 20000);
   book1.ShowBookInfo();
   cout << endl;

   cout << "Book2" << endl;
   Book book2 = book1;
   book2.ShowBookInfo();
   cout << endl;

   cout << "Book3" << endl;
   Book book3("book3", "123", 100000);
   book3 = book1;
   book3.ShowBookInfo();
   cout << endl;

   cout << "EBook1" << endl;
   EBook ebook1("Good C++", "555-12345-890-1", 10000, "fdx9w0i8kiw");
   ebook1.ShowEBookInfo();
   cout << endl;

   cout << "EBook2" << endl;
   EBook ebook2 = ebook1;
   ebook2.ShowEBookInfo();
   cout << endl;

   cout << "EBook3" << endl;
   EBook ebook3("ebook3", "1234", 500, "abcdefg");
   ebook3 = ebook1;
   ebook3.ShowEBookInfo();
   cout << endl;

   return 0;
}