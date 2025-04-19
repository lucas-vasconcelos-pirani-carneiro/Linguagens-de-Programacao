# Lista 02 - Condicionais
Disciplina: #computerscience #programacao  
Tópicos:  #algoritmos #estruturasCondicionais #if #else #switch #C 

---

1.Escreva um programa em C que receba três números inteiros como entrada e imprima, como saída, o maior número recebido.

2.Escreva um programa em C que receba três números inteiros como entrada e imprima, como saída, os números em ordem crescente.

3.Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas (P1 e P2) iniciais; se a média nas duas provas for maior ou igual a 5.0, e se nenhuma das duas notas for inferior a 3.0, o aluno passa direto. Caso contrário, o aluno faz uma terceira prova (P3) e a média é calculada considerandose a terceira nota e a maior das notas entre P1 e P2. Neste caso, o aluno é aprovado se a média final for maior ou igual a 5.0.Escreva um programa completo que leia inicialmente as duas notas de um aluno, fornecidas pelo usuário via teclado. Se as notas não forem suficientes para o aluno passar direto, o programa deve capturar a nota da terceira prova, também fornecida via teclado. Como saída, o programa deve imprimir a média final do aluno, seguida da mensagem “Aprovado” ou “Reprovado”, conforme o critério descrito aqui.

7.Escreva um programa que implemente o jogo conhecido como pedra, papel, tesoura. Neste jogo, o usuário e o computador escolhem entre pedra, papel ou tesoura. Sabendo que pedra ganha de tesoura, papel ganha de pedra e tesoura ganha de papel, exiba na tela o ganhador: usuário ou computador. Para esta implementação, assuma que o número 0 representa pedra, 1 representa papel e 2 representa tesoura.

8.Escreva um programa para fazer conversões entre diferentes unidades. As opções do programa devem ser exibidas em forma de um menu apresentado na tela, em dois níveis.1º nível, o usuário escolhe a classe de unidade.2º nível o usuário escolhe a conversão que deseja, fornecendo então o valor a ser convertido. Por fim, o programa exibe o valor resultante na tela. As opções apresentadas no menu podem ser:
1. Peso
	1. Libra → Quilograma
	2. Quilograma → Libra
	3. Onça → Grama
	4. Grama → Onça 
2. Volume
	1. Galão → Litro
	2. Litro → Galão
	3. Onça → Mililitro
	4. Mililitro → Onça 
3. Comprimento
	1. Milha → Quilômetro
	2. Quilômetro → Milha
	3. Jardas → Metro
	4. Metro → Jardas

Sabe-se que 1 libra = 0.4536 kg, 1 onça = 28.3495 g, 1 galão = 3.7854 l, 1 onça fluido = 29.5735 ml, 1 milha = 1.6093 Km e 1 jarda = 0.9144m. 

9.Ler quatro valores referentes a quatro notas escolares de um aluno e mostrar uma mensagem informando que o aluno foi aprovado se o valor da média for maior ou igual a 5. Se o aluno não foi aprovado, apresentar uma mensagem informando esta condição. Junto com as mensagens apresentar o valor da média do aluno.

10.Ler quatro valores referentes a quatro notas escolares de um aluno e apresentar uma mensagem informando que o aluno foi aprovado se o valor da média escolar for maior ou igual a 7. Se o valor da média for menor que 7, solicitar a nota de exame, somar com o valor da média e obter nova média. Se a nova média for maior ou igual a 5, apresentar uma mensagem informando que o aluno foi aprovado em exame. Se o aluno não foi aprovado, mostrar uma mensagem informando esta condição. Mostrar junto com as mensagens o valor da média do aluno.

11.Ler dois valores numéricos inteiros ou reais e exibir a diferença do maior para o menor.

12.Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.

13.Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

14.Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
    • For maior que 20% do salário, imprima: “Empréstimo não concedido.”
    • Caso contrário, imprima: “Empréstimo concedido.”

15.Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    • O número digitado ao quadrado.
    • A raiz quadrada do número digitado.

16.Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas ( $h: altura$):
    • Homens: $(72,7 * h) - 58$
    • Mulheres: $(62,1 * h) - 44,7$

17.Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.

| Estado  | MG  | SP  | RJ  | MS  |
| ------- | --- | --- | --- | --- |
| Imposto | 7%  | 12% | 15% | 8%  |

18.Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

| Categoria  | Idade   |
| ---------- | ------- |
| Infantil A | 5 - 7   |
| Infantil B | 8 - 10  |
| Juvenil A  | 11 - 13 |
| Juvenil B  | 14 - 17 |
19.Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

| Altura         | Até 60 | Entre 60 e 90 | Acima de 90 |
| -------------- | ------ | ------------- | ----------- |
| Menor que 1,20 | A      | D             | G           |
| 1,20 - 1,70    | B      | E             | H           |
| Maior que 1,70 | C      | F             | I           |

20.Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:

| Número | Média      |
| ------ | ---------- |
| 1      | Geométrica |
| 2      | Ponderada  |
| 3      | Harmônica  |
| 4      | Aritmética |

21.Faça um programa que informe o mês de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4. Saída = Abril.
22.Usando o comando `switch`, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante.
23.Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.
24.Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.
25.Faça um programa que leia os coeficientes de uma equação do segundo grau. Em seguida, calcule e mostre as raízes dessa equação, em que:
$$ \Delta = b^2 - 4ac $$
$$ ax^2 + bx + c = 0 $$
representa uma equação do segundo grau. A variável `a` tem que ser diferente de zero. Caso seja **igual**, imprima a mensagem *“Não é equação de segundo grau”*. Do contrário, imprima:
- Se $\Delta < 0$, não existe real. Imprima a mensagem *“Não existe raiz”.*
- Se $\Delta = 0$, existe uma raiz real. Imprima a raiz e a mensagem *“Raiz única”.*
- Se $\Delta> 0$, existem duas raízes reais. *Imprima as raízes.*

---

26.Escreva um programa que resolva o seguinte problema: uma cópia “xerox” custa R$ 0,25 por folha, mas acima de 100 folhas esse valor cai para R$ 0,20 por unidade. Dado o total de cópias, informe o valor a ser pago.
27.Escreva um programa que informe a categoria de um jogador de futebol, considerando sua idade: infantil (até 13 anos), juvenil (até 17 anos) ou sênior (acima de 17 anos).
28.Escreva um programa que calcule a área de um círculo de raio r, testando se o valor do raio é menor que zero.
29.Escreva um programa que leia o nome de um aluno e as notas que ele obteve nas três provas do semestre. No final, o programa deve informar o nome do aluno e a sua média (aritmética).
30.Escreva um programa que receba um número e mostre uma mensagem caso este seja maior que 10.
31.Escreva um programa que receba um número e diga se ele está no intervalo entre 100 e 200.
32.Escreva um programa que conceda um aumento de 10% ao salário dos funcionários de uma empresa, os quais recebem até R$ 1.000,00.
33.Desenhe um algoritmo que calcule a amplitude total ($AT$) de uma série de cinco números, considerando que $AT = maior\_valor - menor\_valor$.

---

34.Ler quatro valores inteiros positivos e exibir somente aqueles que forem divisíveis por 2 e 3. Não sendo o valor divisível, simplesmente não fazer nada. Usar para a solução desse problema o operador de divisibilidade.

35.Ler um número de ponto flutuante qualquer sinalizado que tenha um tamanho de entrada máxima de 10 posições e multiplicá-lo por dois e meio. Apresentar o resultado no formato 999.99 somente quando o valor obtido for maior que 25.99.

37.Ler quatro valores de ponto flutuante referentes a quatro notas escolares de um aluno e apresentar uma mensagem informando se o aluno foi aprovado ou reprovado. Para determinar a aprovação do aluno, considerar a média escolar calculada e armazenada em uma variável própria maior ou igual a 5. Apresentar com as mensagens o valor da média do aluno.

38.Ler um inteiro curto positivo que esteja na faixa numérica de 1 a 9.O programa deve indicar uma das seguintes mensagens: “O valor está na faixa permitida”, caso o valor fornecido esteja entre 1 e 9, ou “O valor está fora da faixa permitida”, caso o valor seja menor que 0 ou maior que 9.

---

39. Escreva um programa que lê um número inteiro do teclado e imprime "SIM"se o número for par e maior do que 10, ou for ímpar e menor do que 50. Caso contrário o programa deve imprimir "NÃO".
40. Faça um programa que lê um carácter ’F’ ou ’C’, que indica se o próximo número a ser
digitado corresponde a temperatura em Fahrenheit ou Celsius. Em seguida o programa
deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura
na outra unidade de medida.
41. Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou não.(**Obs:** São bissexto todos os anos múltiplos de 400. Não sendo múltiplo de 400, são bissextos todos os anos múltiplos de 4 mas que não são múltiplos de 100.)
42. Faça um programa que leia os três lados de um triângulo e informe se ele é isósceles,
escaleno ou equilátero.(**Obs:** equilátero: possui os três lados iguais; isósceles: possui pelo
menos dois lados iguais; escaleno: três lados distintos.)
43. Escreva um programa que determina a data cronologicamente maior de duas datas fornecidas pelo usuário.Cada data deve ser fornecida por três valores inteiros onde o primeiro representa um dia, o segundo um mês e o terceiro um ano.
44. Escreva um programa que lê uma coordenada (x, y) do teclado e imprima como resposta
o quadrante em que a coordenada está.
45. Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:
• É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
• É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
• É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
• É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.
46. Faça um programa que lê dois números do teclado e em seguida um caracter que representa
uma operação: +, −, ∗, /. Seu programa então deve imprimir o resultado da operação.
47. Escreva um programa que receba as medidas dos lados de um triângulo e decida: se é um triângulo retângulo; se é um triângulo isósceles; ou nenhum dos anteriores. Seu programa deve lidar com a possibilidade de os n úmeros lidos serem negativos.
48. Escreva um programa que leia dez números e devolva o segundo maior deles.
49. Escreva um programa que leia um tabuleiro de jogo da velha e verifique o status do jogo. O tabuleiro é composto de nove números, onde o jogador 'O' e representado por um 0; o jogador ‘X’ por um 2 e uma casa vazia por um 1. A saída do seu programa deve ser ‘X’, ‘O’, ‘Velha’ ou ‘Indefinido’.
50. Escreva um programa que leia três quantias d, m, e a, com a > 1900, representando uma data d/m/a,dia, mês e ano, respectivamente, e devolva quantos dias existem entre a data lida e 1/1/1900.
51. Escreva um programa que leia quatro números inteiros e os imprima em ordem não crescente. Seu programa não deve usar estruturas de repetição.
52. Escreva um programa que leia três palavras de três letras (a leitura deve ser feita caractere por caractere) e as imprima em ordem lexicográfica. Seu programa não deve usar estruturas de repetição e apenas pode declarar variáveis do tipo `int` ou `char`.
53. Faça um programa que receba como entrada um ano e imprima a data da Páscoa naquele ano. Você deve fazer uma pesquisa para encontrar a fórmula que calcula a data da Páscoa.
54. Um grupo de cinco tecnomagos está tentando realizar um ritual para conter os avanços da censura na Web. Para isso cada mago deve conectar seu laptop em uma das pontas de uma rede em formato de pentagrama. Durante o ritual os laptops precisam se comunicar através dos enlaces de redes mostrados na figura. Um pacote pode ser roteado livremente através dos enlaces existentes. Como a rede vai ser bastante utilizada durante a execução do programa-ritual, a cada momento, cada enlace tem um tempo de atraso para rotear um pacote.Sua tarefa  ́e escrever um programa que leia cinco números inteiros que representam os atrasos (em milissegundos) de cada enlace num dado momento. Em seguida seu programa deve ler um número inteiro que representa o destino de um pacote enviado por Spirit (Spirit=0, Water=1, Fire=2, Earth=3,Air=4). Depois disso o seu programa deve determinar o atraso total mínimo possível dessa comunicação.

![[questao54.png]]

55. Considere um terminal de auto-atendimento bancário que opera com cédulas nos valores de 1.00, 5.00,10.00, 50.00 e 100.00 unidades monetárias. Para retirar dinheiro a partir deste terminal, um cliente do banco informa o valor do saque desejado, e o terminal emite a quantia equivalente em notas. Além disso, o número de cada tipo de nota é escolhido de forma a minimizar a quantidade total de cédulas expedidas. Dessa forma, caso o valor da retirada seja de 70.00 unidades monetárias, serão entregues ao cliente uma nota de 50.00 e duas notas de 10.00 (totalizando três notas) e não, por exemplo, sete notas de 10.00 (sete notas no total) ou uma nota de 50.00 e quatro de 5.00 (totalizando cinco notas).Na lista de Entrada/Saída, você fez um programa para ler um valor em unidades monetárias e determinar o número de cédulas expedidas pelo terminal bancário caso essa quantia fosse retirada. Modifique o programa original considerando as seguintes restrições:
	(a) Existe um número fixo de notas de cada tipo. Este dado é fornecido como dado de entrada;
	(b) O seu programa deve obter a melhor resposta (saque com o menor número de notas) considerando o número de notas disponíveis. Por exemplo, se uma pessoa quer sacar 235, mas há apenas uma nota de 100.0, cinco notas de 50.0, vinte notas de 10.0 e dez notas de 5.0, então o seu programa deve devolver: 1 nota de 100, 2 notas de 50, 3 notas de 10 e 5 notas de 1;
	(c) Além disso, se não houver notas suficientes para o saque em questão, o seu programa deve informar isto com uma mensagem apropriada. Por exemplo, se uma pessoa quer sacar 235, mas há apenas uma nota de 100.0, uma nota de 50.0, cinco notas de 10.0 e cinco notas de 5.0, então o seu programa deve devolver: Não há dinheiro suficiente para o saque.