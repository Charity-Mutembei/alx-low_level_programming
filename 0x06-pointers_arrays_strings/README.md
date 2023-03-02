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
