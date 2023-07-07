#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * decryptFile - Decrypts the file using XOR with a given key.
 * 
 * @filename: The name of the encrypted file.
 * @key: The XOR key for decryption.
 */
void decryptFile(const char* filename, unsigned char key)
{
	FILE* file = fopen(filename, "rb");
	if (file == NULL)
	{
		printf("Error opening the file.\n");
		return;
	}
	
	/* Create a new file for the decrypted output */
	FILE* decryptedFile = fopen("decrypted_file.txt", "w");
	if (decryptedFile == NULL)
	{
		printf("Error creating the decrypted file.\n");
		fclose(file);
		return;
	}
	
	/* Read the encrypted file byte by byte and decrypt using XOR with the key */
	int ch;
	while ((ch = fgetc(file)) != EOF) 
	{
		unsigned char decryptedCh = ch ^ key;
		fputc(decryptedCh, decryptedFile);
	}
	printf("%d. Decryption completed successfully.\n", key);
	
	/* Close the files */
	fclose(file);
	fclose(decryptedFile);
}

/**
 * isMeaningfulFile - Checks if a file contains meaningful text.
 * 
 * @filename: The name of the file to check.
 * Return: True if the file contains meaningful text, false otherwise.
 */
bool isMeaningfulFile(const char* filename)
{
	FILE* file = fopen(filename, "r");
	if (file == NULL)
	{
		printf("Error opening the file.\n");
		return false;
	}
	
	/* Read the file character by character */
	int ch;
	while ((ch = fgetc(file)) != EOF)
	{
		// Check if the character is a printable ASCII character
		if (ch < 32 || ch > 126)
		{
			fclose(file);
			return false;
		}
	}
	
	/*Close the file*/
	fclose(file);
	return true;
}

/**
 * main - programs entry point
 */
int main()
{
	const char* filename = "Encrypted.txt";
	/* Loop through all possible key values (0-255)*/
	for (unsigned char key = 0; key <= 255; key++)
	{
		decryptFile(filename, key);
		/*Check if the decrypted file is meaningful*/
		if (isMeaningfulFile("decrypted_file.txt"))
		{
			printf("Found the right XOR key: %u\n", key);
			break;
		}
	}
	
	return 0;
}
