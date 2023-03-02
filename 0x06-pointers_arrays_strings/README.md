## README.md on 0x06 project on pointers, arrays and strings
## Question 4:I am a kind of Paranoid in reverse. I suspect people of plotting to make me happy. 



void reverse_array(int *a, int n)<br>

{
    int i = 0, j = n - 1;

    while (i < j) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
}

## Question 5: Always look up
char *string_toupper(char *str) <br>

{ <br>
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
        i++;
    }
    return str;
}

This implementation works by iterating over each character in the string and checking if it falls in the lowercase range of ASCII characters (97-122). If it does, then it subtracts the difference between the uppercase and lowercase ASCII values (which is 32) to convert it to uppercase. The loop continues until it reaches the end of the string (indicated by the null character \0).

Note that this implementation assumes that the input string is a null-terminated string (i.e., it ends with a null character \0).

what if instead of using letters, we use the equivalent ASCII numbers 
If you want to convert ASCII values instead of letters, you can modify the previous implementation slightly to check if the ASCII value falls within the lowercase range of ASCII values (97-122) and subtract the difference between uppercase and lowercase ASCII values (which is 32) to convert it to uppercase. Here's an example implementation in C:


char *ascii_toupper(char *str) <br>
 { <br>
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}

This implementation works similarly to the previous one, except it checks if the ASCII value of each character falls within the lowercase range of ASCII values instead of checking if it's a letter. If it does, then it subtracts the difference between the uppercase and lowercase ASCII values (which is 32) to convert it to uppercase. Note that this implementation assumes that the input string is a null-terminated string (i.e., it ends with a null character \0).