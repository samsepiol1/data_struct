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

Pessoa setPessoa(int idade, float peso, float altura){
    Pessoa p;
    P.idade = idade;
    P.Peso = peso;
    P.Altura = altura;
    return P // Retorna a struct com os parametros
}

void ImprimePessoa(Pessoa P){
      printf("Idade: %d  Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
} 

//Passagem por referência

void setPessoa(Pessoa *p, int idade, float peso, float altura){
    (*P).Idade = idade;
    P ->Peso = Peso;
    P ->Altura = altura;
}

struct ficha_de_aluno aluno;





struct Ponto p1 = {3,4};
p1.x = 5;
printf("Ponto: (%d, %d)\n", p1.x, p1.y);
printf(aluno.nome);
