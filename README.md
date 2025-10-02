# recursao-soma-intervalo

Soma Recursiva Entre Dois Inteiros

Este projeto implementa uma função recursiva em C++ que calcula a soma de todos os números inteiros existentes entre dois valores positivos fornecidos pelo usuário. O programa é interativo, realiza validações de entrada e demonstra o uso da recursão de forma clara e didática.


📌 Funcionalidades
- Solicita dois números inteiros positivos ao usuário
- Valida se o primeiro número é menor que o segundo
- Calcula a soma dos números inteiros entre os dois valores (excluindo os extremos)
- Utiliza recursão para realizar o cálculo
- Executa em loop contínuo para múltiplas interações

🧠 Lógica da Função Recursiva
A função soma_entre_n(int a, int b) recebe dois inteiros e retorna a soma dos números entre eles. A recursão ocorre reduzindo o intervalo até que a == b, momento em que a função retorna 0.
int soma_entre_n(int a, int b) {
    if (a >= b)
        return 0;
    else
        return a + soma_entre_n(a + 1, b);
}

🛠️ Tecnologias Utilizadas
- Linguagem: C++
- Bibliotecas padrão: iostream, cmath, cstdlib, entre outras
- 
🚀 Como Executar
- Clone o repositório
- Compile o código
- Execute o programa:
  
📚 Objetivo Educacional
Este projeto é ideal para estudantes de programação que desejam entender:
- O funcionamento de funções recursivas
- Validação de entrada em C++
- Estrutura básica de um programa interativo em terminal


