   1 #define KEY 'X' ;
   2 #define CLEARTEXT 'A' ;
   3
   4
   5 #include <stdio.h>
   6
   7 void printchar (char c, char *text)
   8 {
   9     printf("%s = '%c'(0x%x)\n", text, c, c);
  10         return;
  11 }
  12 int main() {
  13     char cleartext, key, ciphertext, newcleartext;
  14     cleartext = CLEARTEXT;
  15     printchar(cleartext, "cleartext");
  16
  17     key = KEY;
  18     printchar(key, "key");
  19
  20     ciphertext = cleartext ^ key;
  21         printchar(ciphertext, "ciphertext");
  22
  23     newcleartext = ciphertext ^ key;
  24     printchar(newcleartext, "newcleartext");
  25     return 0;
  26 }
