# AEDS1: Listas de Exercícios

## Lista -- Prova 2: Structs e Funções

### Funções

1. Escreva uma função que recebe um vetor salva o maior elemento em um
endereço passado por referência:
```c
void menor(int n. int vetor[n], int *menor_aqui);
```

1. Escreva um algoritmo que determina se um número inteiro é primo. Qual
   é a complexidade do seu algoritmo?

1. Escreva um que aproxima o logaritmo de um número inteiro para um número
   outro inteiro cujo valor é próximo do log real. Isto é, arredonde o valor
   de log para cima ou para baixo. Por exemplo log<sub>3</sub>10 = 2.09. 
   Você pode retornar 2 ou 3. Qual a complexidade da sua função?
   
   ```c
   int myLogTosco(int number, int power)
   ```
   
   Não utilize a `math.h` ou qualquer biblioteca externa. Código C apenas.
   
1. Escreva uma função que retorna os *x* menores números de um vetor. Quando
   *x=1*, retornamos apenas o menor número. Quando *x=2* retornamos os dois
   menores. Qual a complexidade da sua função?

   ```c
   int nSmallest(int *vec, int n, int x)
   ```
   
   n é número de elementos no vetor.
   
1. Escreva um algoritmo que compacta uma string. A compactação de uma string
   é uma operação que simplesmente conta o número de ocorrências de letras na
   string retornando uma nova string de tamanho menor. Por exemplo, a string:

   ``` aaaaabcdddeeeffffff   abc```

   É compactada para:

   ```a5b1c2d3e3f6 3a1b1c1```

   Sua função deve ter uma assinatura como:

   ```c
   char *compacta(char *string)
   ```

   Escreva também a função inversa

   ```c
   char *descompacta(char *string)
   ```

   Indique a complexidade das duas funções em termos do tamanho das strings.

1. Escreva um programa que contenha uma função com a seguinte assinatura:
```c
int dados_triang(float a, float b, float c, float *area, float *perímetro);
```
A função deverá receber por valor as medidas de 3 segmentos de reta, a, b e c. Caso seja possível formar um triângulo, a função deverá retornar 1 (por meio do comando return) e os parâmetros area e perimetro, passados por referência, deverão receber os respectivos valores referentes ao triângulo. Caso não seja possível formar um triângulo, a função deverá retornar 0 e os parâmetros area e perimetro deverão também receber valor 0.

O programa deverá receber a medida dos 3 segmentos e deverá informar ao usuário se é possível formar um triângulo ou não. O programa também deverá informar o valor da área e do perímetro do triângulo. Caso não seja possível formar um triângulo, o programa deverá informar area=0 e perimetro=0.

1. Escreva uma função para calcular o valor da seguinte função harmônica h(x) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/x, para um inteiro x positivo (n>0).


### Structs

1. Crie uma estrutura para representar as coordenadas de um ponto no plano
(posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a
distância entre eles.

1. Crie uma estrutura chamada Retangulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é
definido por uma estrutura Ponto, criada no exercício anterior. Faça um
programa que declare e leia uma estrutura Retangulo e exiba a área, o
comprimento da diagonal e o perímetro desse retângulo.

1. Usando as estruturas Retangulo e Ponto dos exercícios anteriores, faça um
programa que declare e leia uma estrutura Retangulo e um Ponto e informe se
esse ponto está ou não dentro do retângulo.

1. Crie uma estrutura Aluno representando um aluno de uma disciplina. Essa
estrutura deve conter o número de matrícula do aluno, seu nome e as notas de
três provas. Agora, escreva um programa que leia os dados de cinco alunos e os
armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno que
possui a maior média geral dentre os cinco.

1. Crie uma estrutura Hora representando uma hora. Essa estrutura deve conter
os campos hora, minuto e segundo. Agora, escreva um programa que leia um vetor
de cinco posições dessa estrutura e imprima a maior hora.

1. Crie uma estrutura Atleta representando um atleta. Essa estrutura deve
conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um
programa que leia os dados de cinco atletas.  Calcule e exiba os nomes do
atleta mais alto e do mais velho.

1. Usando a estrutura Atleta do exercício anterior, escreva um programa que
leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho
para o mais novo.

1. Escreva um programa que contenha uma estrutura Data representando uma data
válida. Essa estrutura deve conter os campos “dia”, “mês” e “ano”. Em seguida,
leia duas datas e armazene nessa estrutura. Calcule e exiba o número de dias
que decorreram entre as duas datas.
