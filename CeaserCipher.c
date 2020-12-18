#include<stdio.h>

void Encrypt();
void Decrypt();

int main(){

    int choice;
    printf(" \n Choose one option: \n");
    printf("1. Encrypt \n ");
    printf("2. Decrypt \n ");
    printf("3. Exit \n ");
    scanf("%d",&choice);

    switch(choice){

    case 1:
        Encrypt();
        main();
        break;


    case 2:
        Decrypt();
        main();
        break;

    case 3:
        exit(0);

    default:
        printf("Choose a valid Optio");
        break;



    }

}
    //Encrypting the user message using Ceaser cipher and printing the encrypted message
void Encrypt(){

    char textMsg[100], ch;
	int i, ceaserShift;

	printf("Enter a message to encrypt using Ceaser Cipher: ");
	scanf("%s", textMsg);
	printf("Enter the Ceaser Shift: ");
	scanf("%d", &ceaserShift);

	for(i = 0; textMsg[i] != '\0'; ++i){
		ch = textMsg[i];

		if(ch >= 'a' && ch <= 'z'){
			ch = ch + ceaserShift;

			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}

			textMsg[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + ceaserShift;

			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}

			textMsg[i] = ch;
		}
	}

	printf("Encrypted message: %s", textMsg);

	return 0;
}

void Decrypt(){

    char textMsg[100], ch;
	int i, ceaserShift;

	printf("Enter a message to decrypt using Ceaser Cipher: ");
	scanf("%s", textMsg);
	printf("Enter the Ceaser Shift: ");
	scanf("%d", &ceaserShift);

	for(i = 0; textMsg[i] != '\0'; ++i){
		ch = textMsg[i];

		if(ch >= 'a' && ch <= 'z'){
			ch = ch - ceaserShift;

			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}

			textMsg[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - ceaserShift;

			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}

			textMsg[i] = ch;
		}
	}

	printf("Decrypted message: %s", textMsg);

	return 0;
}



