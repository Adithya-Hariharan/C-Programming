//Write a C program to find frequency of "the" word in a given lengthy string

    #include<stdio.h>
    #include<string.h>
    int main()
    {
        int len, i, freq = 0, t, h, e, s;
        char string[100];
        printf("Enter a string: ");
        gets(string);
        len = strlen(string);
        /*   Finding the frequency of the word 'the' */
        for (i = 0; i <= len - 3; i++)
        {
            t =(string[i] == 't' || string[i] == 'T');
            h =(string[i + 1] == 'h' || string[i + 1] == 'H');
            e =(string[i + 2] == 'e'|| string[i + 2] == 'E');
            s =(string[i + 3] == ' ' || string[i + 3] == '\0');
            if ((t && h && e && s) == 1)
                freq++;
        }
        printf("Frequency of the word 'the' is %d\n", freq);
    }