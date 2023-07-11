#include <iostream>
#include <string>
using namespace std;
string encryptDecrypt(string input,string key) {
    string output = input;
    for (int i = 0; i < input.size(); ++i) {
        output[i] = input[i] ^ key[i % key.length()];
    }
    return output;
}

int main() {
    string message = "Hello World!";
    string encryptionKey = "encryption";

    // Шифруем сообщение
    string encryptedMessage = encryptDecrypt(message, encryptionKey);
    cout << "Encrypted Message: " << encryptedMessage <<endl;

    // Дешифруем сообщение
    string decryptedMessage = encryptDecrypt(encryptedMessage, encryptionKey);
    cout << "Decrypted Message: " << decryptedMessage << endl;

}