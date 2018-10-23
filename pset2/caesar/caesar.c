#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[]) {

    int encryptNum;

    if (argc != 2 | atoi(argv[1] < 0) {

        printf("Please enter positive numbers only!")

    } else {
        encryptNum = atoi(argv[1]);
        encryptNum = encryptNum % 26;
    }

    string plaintext = get_string("Plaintext: ");

    for (i = 0; i < strlen(plaintext); i++) {
        if (text[i] >= 97 & text[i] <= 122) if(text[i] + encryptNum <= 122) {
                text[i] = (char) ((short) text[i] + encryptNum);
    } else {
                short overflow = (encryptNum + (short) text[i]) - 122;
                text[i] = (char) 96 + overflow;
            }

            if(text[i] >= 65 & text[i] <= 90) {
            if(text[i] + encryptNum <= 90) {
                text[i] = (char) ((short) text[i] + encryptNum);
            } else {
                short overflow = (encryptNum + (short) text[i]) - 90;
                text[i] = (char) 64 + overflow;
            }

}

}

printf("ciphertext: %s\n", text);
    return 0;

}