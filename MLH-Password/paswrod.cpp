//Simple C++ program to encrypt and decrypt a string

#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << "Please enter your Password:\t";
   cin >> str;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt the Password.\n";
   cout << "2 = Decrypt the Password.\n";
   cin >> x;

   //using switch case statements
   switch(x)
   {
      //first case for encrypting a Password
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         cout << "\nEncrypted Password: " << str << endl;
         break;

      //second case for decrypting a Password
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

      cout << "\nDecrypted Password: " << str << endl;
      break;

      default:
         cout << "\nInvalid Input !!!\n";
   }
   return 0;
}