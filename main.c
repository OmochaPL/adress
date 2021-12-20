int main(void)
/*ten program wyśietla adres w pamięci w którym przechowywama jest wartość 50*/

{
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}
