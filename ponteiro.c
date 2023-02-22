int *ponteiro;
int x = 10;
int *ponteiro = &x;
printf("%d", *ponteiro);

//Usando MALLOC

int *ponteiro = (int*)malloc(sizeof(int));
free(ponteiro);