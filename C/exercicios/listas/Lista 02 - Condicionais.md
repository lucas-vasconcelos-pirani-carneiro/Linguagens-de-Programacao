# Lista 02 - Condicionais

Disciplina: #computerscience #programacao  
Tópicos:  #algoritmos #estruturasCondicionais #if #else #switch #C 

---

# Lista 02 - Condicionais
**Disciplina:** #computerscience #programacao  
**Tópicos:** #algoritmos #estruturasCondicionais #if #else #switch #C

---

1. Escreva um programa em C que receba três números inteiros como entrada e imprima, como saída, o maior número recebido.

2. Escreva um programa em C que receba três números inteiros como entrada e imprima, como saída, os números em ordem crescente.

3. Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas (P1 e P2) iniciais; se a média nas duas provas for maior ou igual a 5.0, e se nenhuma das duas notas for inferior a 3.0, o aluno passa direto. Caso contrário, o aluno faz uma terceira prova (P3) e a média é calculada considerando-se a terceira nota e a maior das notas entre P1 e P2. Neste caso, o aluno é aprovado se a média final for maior ou igual a 5.0.

   Escreva um programa completo que leia inicialmente as duas notas de um aluno, fornecidas pelo usuário via teclado. Se as notas não forem suficientes para o aluno passar direto, o programa deve capturar a nota da terceira prova, também fornecida via teclado. Como saída, o programa deve imprimir a média final do aluno, seguida da mensagem “Aprovado” ou “Reprovado”, conforme o critério descrito aqui.

4. Escreva um programa que implemente o jogo conhecido como pedra, papel, tesoura. Neste jogo, o usuário e o computador escolhem entre pedra, papel ou tesoura. Sabendo que:
   - Pedra ganha de tesoura
   - Papel ganha de pedra
   - Tesoura ganha de papel

   Exiba na tela o ganhador: usuário ou computador.  
   Para esta implementação, assuma que:
   - `0` representa pedra  
   - `1` representa papel  
   - `2` representa tesoura

5. Escreva um programa para fazer conversões entre diferentes unidades. As opções do programa devem ser exibidas em forma de um menu apresentado na tela, em dois níveis:
   - 1º nível: o usuário escolhe a **classe de unidade**.
   - 2º nível: o usuário escolhe a **conversão** que deseja, fornecendo então o **valor a ser convertido**. Por fim, o programa exibe o valor resultante na tela.

   As opções apresentadas no menu podem ser:

   **1. Peso**
   - Libra → Quilograma  
   - Quilograma → Libra  
   - Onça → Grama  
   - Grama → Onça  

   **2. Volume**
   - Galão → Litro  
   - Litro → Galão  
   - Onça → Mililitro  
   - Mililitro → Onça  

   **3. Comprimento**
   - Milha → Quilômetro  
   - Quilômetro → Milha  
   - Jarda → Metro  
   - Metro → Jarda  

   Conversões:
   - 1 libra = 0.4536 kg  
   - 1 onça = 28.3495 g  
   - 1 galão = 3.7854 l  
   - 1 onça fluida = 29.5735 ml  
   - 1 milha = 1.6093 km  
   - 1 jarda = 0.9144 m  

6. Ler quatro valores referentes a quatro notas escolares de um aluno e mostrar uma mensagem informando que o aluno foi aprovado se a média for maior ou igual a 5. Se o aluno não foi aprovado, apresentar uma mensagem informando esta condição. Junto com as mensagens, apresentar o valor da média do aluno.

7. Ler quatro notas de um aluno e verificar:
    - Se a média ≥ 7 → Aprovado
    - Senão: solicitar nota do exame
      - Se nova média (média + exame)/2 ≥ 5 → Aprovado em exame
      - Senão → Reprovado

    Mostrar as mensagens com as médias calculadas.

8. Ler dois valores numéricos (inteiros ou reais) e exibir a diferença do maior para o menor.

9. Faça um programa que leia dois números e mostre o maior deles. Se forem iguais, imprima: “Números iguais”.

10. Faça um programa que leia um número inteiro e verifique se ele é par ou ímpar.

11. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
    - For maior que 20% do salário → “Empréstimo não concedido.”
    - Caso contrário → “Empréstimo concedido.”

12. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    - O número ao quadrado
    - A raiz quadrada do número

13. Faça um programa que receba a altura e o sexo de uma pessoa e calcule o peso ideal:

    - Homens: $(72,7 \times h) - 58$  
    - Mulheres: $(62,1 \times h) - 44,7$

14. Uma empresa vende um produto para quatro estados, com impostos diferentes. O usuário informa o valor e o estado de destino. O programa retorna o preço final com imposto. Caso o estado seja inválido, exiba mensagem de erro.

| Estado  | MG  | SP  | RJ  | MS  |
| ------- | --- | --- | --- | --- |
| Imposto | 7%  | 12% | 15% | 8%  |

18. Classifique a idade de um nadador:

| Categoria  | Idade   |
|------------|---------|
| Infantil A | 5 - 7   |
| Infantil B | 8 - 10  |
| Juvenil A  | 11 - 13 |
| Juvenil B  | 14 - 17 |

19. Classifique uma pessoa conforme altura e peso:

| Altura      | Até 60 | Entre 60 e 90 | Acima de 90 |
| ----------- | ------ | ------------- | ----------- |
| < 1,20      | A      | D             | G           |
| 1,20 - 1,70 | B      | E             | H           |
| > 1,70      | C      | F             | I           |

20. Média entre três números, conforme código digitado:

| Código | Tipo de média |
|--------|---------------|
| 1      | Geométrica    |
| 2      | Ponderada     |
| 3      | Harmônica     |
| 4      | Aritmética    |

21. Faça um programa que informe o mês conforme o número (ex: entrada = 4, saída = Abril).

22. Usando `switch`, escreva um programa que leia um número de 1 a 7 e imprima o dia da semana correspondente.

23. Faça um programa que mostre um menu com 4 operações matemáticas. O usuário escolhe uma e fornece dois valores para realizar a operação.

24. Verifique se um número inteiro é divisível por 3 ou 5, mas não simultaneamente por ambos.

25. Resolva uma equação do 2º grau:
   $$ \Delta = b^2 - 4ac $$
   $$ ax^2 + bx + c = 0 $$

   - Se `a == 0`: “Não é equação de segundo grau”
   - Se $\Delta < 0$: “Não existe raiz”
   - Se $\Delta = 0$: “Raiz única”
   - Se $\Delta > 0$: “Duas raízes reais”


26. Cópias a R$ 0,25. Acima de 100 folhas, valor é R$ 0,20 por folha. Informe o total a pagar.

27. Categoria de jogador por idade:
   - Infantil: até 13 anos
   - Juvenil: até 17 anos
   - Sênior: acima de 17 anos

28. Calcule a área de um círculo dado o raio `r`. Testar se `r < 0`.

29. Leia o nome e as notas de um aluno. Informe o nome e a média aritmética.

30. Leia um número e exiba mensagem caso seja maior que 10.

31. Leia um número e diga se está entre 100 e 200.

32. Conceda aumento de 10% aos funcionários que recebem até R$ 1.000,00.

33. Calcule a amplitude total ($AT$) de uma série de 5 números:  
    $$ AT = \text{maior valor} - \text{menor valor} $$

34. Ler 4 inteiros positivos. Exibir os que forem divisíveis por 2 **e** 3.

35. Ler um número `float` (até 10 dígitos), multiplicá-lo por 2,5. Exibir no formato `999.99` **somente** se o resultado for maior que 25.99.

36. Ler 4 notas (float), calcular média. Informar se o aluno foi aprovado (média ≥ 5) ou reprovado.

37. Ler um inteiro curto entre 1 e 9:
   - Se válido: “O valor está na faixa permitida”
   - Senão: “O valor está fora da faixa permitida”

38. Escreva um programa que lê um número inteiro do teclado e imprime `"SIM"` se o número for **par e maior do que 10**, ou **ímpa e menor do que 50**. Caso contrário, o programa deve imprimir `"NÃO"`.

39. Faça um programa que lê um caractere `F` ou `C`, que indica se o próximo número a ser digitado corresponde à temperatura em **Fahrenheit** ou **Celsius**. Em seguida, o programa deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura na outra unidade de medida.

40. Faça um programa que leia um ano (valor inteiro) e imprima se ele é **bissexto** ou não. **Obs:** São bissextos todos os anos múltiplos de 400. Não sendo múltiplo de 400, são bissextos todos os anos múltiplos de 4 mas que **não** são múltiplos de 100.

41. Faça um programa que leia os três lados de um triângulo e informe se ele é **isósceles**, **escaleno** ou **equilátero**.  
**Obs:**

- Equilátero: três lados iguais
    
- Isósceles: dois lados iguais
    
- Escaleno: três lados diferentes
    

42. Escreva um programa que determina a data cronologicamente maior de duas datas fornecidas pelo usuário. Cada data deve ser fornecida por três valores inteiros: **dia**, **mês** e **ano**.

43. Escreva um programa que lê uma coordenada `(x, y)` do teclado e imprime o **quadrante** em que a coordenada está.

44. Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:

- É do sexo masculino, possui **pelo menos 65 anos** e **pelo menos 10 anos de contribuição**;
    
- É do sexo masculino, possui **pelo menos 63 anos** e **pelo menos 15 anos de contribuição**;
    
- É do sexo feminino, possui **pelo menos 63 anos** e **pelo menos 10 anos de contribuição**;
    
- É do sexo feminino, possui **pelo menos 61 anos** e **pelo menos 15 anos de contribuição**.  
    Faça um programa que leia as informações de idade, tempo de contribuição e sexo da pessoa e informe se ela pode se aposentar.
    

45. Faça um programa que lê dois números do teclado e em seguida um caractere que representa uma operação: `+`, `−`, `*`, `/`. Seu programa então deve imprimir o **resultado da operação**.

46. Escreva um programa que receba as medidas dos lados de um triângulo e decida:

- Se é um **triângulo retângulo**;
    
- Se é um **triângulo isósceles**;
    
- Ou **nenhum dos anteriores**.  
    Seu programa deve lidar com a possibilidade de os números lidos serem negativos.
    

47. Escreva um programa que leia **dez números** e devolva o **segundo maior** deles.

48. Escreva um programa que leia um **tabuleiro de jogo da velha** e verifique o status do jogo.  
O tabuleiro é composto de **nove números**, onde:

- O jogador `'O'` é representado por `0`
    
- O jogador `'X'` por `2`
    
- Uma casa vazia por `1`  
    A saída do seu programa deve ser: `'X'`, `'O'`, `'Velha'` ou `'Indefinido'`.
    

49. Escreva um programa que leia três quantias `d`, `m`, e `a`, com `a > 1900`, representando uma data `d/m/a` (dia, mês e ano, respectivamente), e devolva **quantos dias existem entre a data lida e 1/1/1900**.

50. Escreva um programa que leia **quatro números inteiros** e os imprima em **ordem não crescente**.  
Seu programa **não deve usar estruturas de repetição**.

51. Escreva um programa que leia **três palavras de três letras** (a leitura deve ser feita caractere por caractere) e as imprima em **ordem lexicográfica**.  
Seu programa **não deve usar estruturas de repetição** e apenas pode declarar variáveis do tipo `int` ou `char`.

52. Faça um programa que receba como entrada um ano e **imprima a data da Páscoa** naquele ano.  
Você deve fazer uma pesquisa para encontrar a fórmula que calcula a data da Páscoa.

53. Um grupo de cinco tecnomagos está tentando realizar um ritual para conter os avanços da censura na Web. Para isso, cada mago deve conectar seu laptop em uma das pontas de uma rede em formato de pentagrama. Durante o ritual, os laptops precisam se comunicar através dos enlaces de redes.  
Cada enlace tem um **tempo de atraso** para rotear um pacote.  
Sua tarefa é escrever um programa que:

- Leia **cinco números inteiros** representando os atrasos (em milissegundos) de cada enlace;
    
- Leia um número inteiro representando o **destino** de um pacote enviado por Spirit (`Spirit = 0`, `Water = 1`, `Fire = 2`, `Earth = 3`, `Air = 4`);
    
- Determine o **atraso total mínimo possível** dessa comunicação.
    
![[questao54.png]]

55. Considere um terminal de autoatendimento bancário que opera com cédulas nos valores de `1.00`, `5.00`, `10.00`, `50.00` e `100.00` unidades monetárias.  
O terminal deve:

- Informar o **menor número de cédulas** para uma quantia retirada;
    
- Considerar o **estoque disponível** de cada tipo de nota (fornecido como entrada);  
    Escreva um programa que:
    
- Leia o valor do saque;
    
- Leia a quantidade disponível de cada cédula;
    
- Calcule o **menor número de cédulas possível** para o saque;
    
- Caso **não haja notas suficientes**, imprima uma mensagem informando: `"Não há dinheiro suficiente para o saque."`










