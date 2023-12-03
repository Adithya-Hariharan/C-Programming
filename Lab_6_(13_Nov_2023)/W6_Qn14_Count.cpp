//Write a C program to find count number of vovewls, consonants, digits and white spaces in a string

    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int len, i, freqv = 0, v,freqc=0, c,freqd=0, d,freqs=0, s;
        char string[100];
        printf("Enter a string (without special symbols except space): ");
        gets(string);
        len = strlen(string);
        for (i = 0; i < len; i++)
        {
            v =(string[i] == 'a' || string[i] == 'A'||string[i] == 'e' || string[i] == 'E'||string[i] == 'i' || string[i] == 'I'||string[i] == 'o' || string[i] == 'O'||string[i] == 'u' || string[i] == 'U');          
			d =(string[i] == '0' || string[i] == '1' || string[i] == '2'||string[i] == '3' || string[i] == '4' || string[i] == '5'||string[i] == '6' || string[i] == '7' || string[i] == '8'||string[i]=='9' );
            s =(string[i] == ' ');
            if (v == 1)
                freqv++;
            else if(d==1)
            	freqd++;
            else if(s==1)
            	freqs++;
            else
            	freqc++;
        }
        printf("Count of vowels %d\n", freqv);
        printf("Count of consonants %d\n", freqc);
        printf("Count of digits %d\n", freqd);
        printf("Count of spaces %d\n", freqs);
    }