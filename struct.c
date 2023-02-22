struct Ponto{
    int x;
    int y;
};

struct ficha_de_aluno{
    char nome[50];
    char disciplina[30];
    float nota_prova1;
    float nota_prova2;
}


typedef struct{
    float Peso;
    int Idade;
    float Altura;
} Pessoa; //Cria uma STRUCT para armazenar os dados de uma pessoa


void ImprimePessoa(Pessoa P) // Declara um parametro como {
    printf("idade: %d Peso: %f");
}

struct ficha_de_aluno aluno;





struct Ponto p1 = {3,4};
p1.x = 5;
printf("Ponto: (%d, %d)\n", p1.x, p1.y);
printf(aluno.nome);
