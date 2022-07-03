//THIS IS THE CODE FOR DNCRYPTION OF A STRING OR A MESSAGE

#include <iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()
{
    int i, key; //two integers have been assigned one for the position of letters and another for encryption key.
    char str[50]; //Character array of maximum size 50 is declared here.

    cout<<"Enter the string :" <<endl; //Enter the string or message which has to be decrypted.
    cin.getline(str, 50); //This function is used to read the input string or a message entered by user.

    cout<<"Enter The Decryption Key :"<<endl; //The encryption key is entered here.
    cin>>key;

    for(int i = 0; (i < 50 && str[i] != '\0'); i++) //This for loop checks each letter one by one for null character.
    {
        str[i] = str[i] - key; //The original string or message is obtained by subtracting the encryption key from the position of each letter.

    }
        cout<<"The Decryption is :" <<str<<endl; //The original message is printed due to this.

    return 0;
}
