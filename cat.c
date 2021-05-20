#include <stdio.h>

int main(int argc, char *argv[]) {
    
    if (argc == 2) {
        char ch;
        FILE *fp;
        
        fp = fopen(argv[1], "r");

        if (fp == NULL) {
            printf(" [!] Error, file not found or seems to be empty or corrupt\n");
            return 1;
        }
        
        while ((ch = fgetc(fp)) != EOF)
              
            printf("%c", ch);
        fclose(fp);

        return 0; 
    }
    else {
        printf("[+] Usage: %s [filename]\n", argv[0]);

        return 1;
    }
}
