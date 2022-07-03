//THIS IS THE CODE FOR ENCRYPTION OF A STRING OR A MESSAGE

#include <iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()
{
    int i, key; //two integers have been assigned one for the position of letters and another for encryption key.
    char str[50]; //Character array with maximum size is declared.

    cout<<"Enter the strings :" <<endl;
    cin.getline(str, 50); //This function is used to read the input string or a message entered by user.

    cout<<"Enter the Encryption key :"<<endl;
    cin>>key; //The encryption key is stored in this variable.

    for(int i = 0; (i < 50 && str[i] != '\0'); i++) //This for loop checks each letter one by one for null character.
    {
        str[i] = str[i] + key; //The position of each character is changed by the addition of encryption key to the position.

    }
        cout<<"The Encryption is :" <<str<<endl; //The encrypted string or message is printed due to this.
        cout<<"Encrypted with the Encryption Key: "<<key<<endl; //The encryption key is printed due to this.

    return 0;
}
