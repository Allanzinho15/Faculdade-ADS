// Operadores aritméticos
// Os operadores aritméticos básicos em C são usados para realizar operações matemáticas simples: soma, subtração, multiplicação e divisão.

 

// Operador soma (+): é usado para somar valores de duas ou mais variáveis. Exemplo:
// int a = 5;
// int b = 3;
// int soma = a + b; // soma será 8


// Operador subtração (-): é usado para calcular a diferença entre dois valores. Exemplo:
// int a = 5;
// int b = 3;
// int subtracao = a - b; // subtracao será 2


// Operador multiplicação (*): é usado para calcular o produto de dois valores, por exemplo:
// int a = 5;
// int b = 3;
// int multiplicacao = a * b; // multiplicacao será 15


// Operador divisão (/): é usado para calcular a razão de dois valores. Note que a divisão entre inteiros resulta em um inteiro, descartando a parte fracionária. Veja um exemplo:
// int a = 10;
// int b = 3;
// int divisao = a / b; // divisao será 3


// Operadores de atribuição

// São usados para atribuir valores a variáveis. Eles podem ser combinados com operadores aritméticos para realizar uma operação e, em seguida, atribuir o resultado à variável.

 

// Atribuição simples (=): é o operador de atribuição mais básico, usado para inicializar ou atualizar o valor de uma variável, como apresentado a seguir.
// int a = 5; // a agora vale 5


// Atribuição com soma (+=): adiciona um valor à variável e atribui o resultado à própria variável. Esse operador é usado para aumentar o valor de uma variável de forma eficiente. Veja!
// int a = 5;
// a += 3; // a será 8 (equivalente a a = a + 3)


// Atribuição com subtração (-=): subtrai um valor da variável e atribui o resultado à própria variável. Esse operador é usado para diminuir o valor de uma variável de forma eficiente. Veja!
// int a = 5;
// a -= 3; // a será 2 (equivalente a a = a - 3)


// Atribuição com multiplicação (*=): permite multiplicar uma variável por um valor e atribui o resultado à própria variável. Esse operador é usado para multiplicar o valor de uma variável de forma eficiente, como apresentado a seguir.
// int a = 5;
// a *= 3; // a será 15 (equivalente a a = a * 3)


// Atribuição com divisão (/=): realiza a divisão da variável por um valor especificado e atribui o resultado à própria variável, de forma eficiente. Aqui está um exemplo:
// int a = 10;
// a /= 2; // a será 5 (equivalente a a = a / 2)


// Operadores de incremento e decremento

// São usados para aumentar ou diminuir o valor de uma variável em 1. Acompanhe!

 

// Operador incremento (++): aumenta o valor de uma variável em 1. Esse operador é muito utilizado em loops e outras situações em que é necessário incrementar o valor de uma variável repetidamente. Por exemplo, no trecho de código a seguir a variável “i” é inicializada valendo 1 e na linha “i++” ela passa a valer 2.
// int i =1;
// i++; // i terá o valor 2


// O operador incremento pode ser utilizado de duas formas:
// Pré-incremento
// Incrementa a variável antes de seu uso. No exemplo a seguir a variável a é incrementada antes do seu valor ser atribuído à variável b. Ao final da operação, tanto a, como b terão o mesmo valor.
// int a = 5;
// int b = ++a; // a será 6, b será 6


// Poderíamos escrever o código anterior do seguinte modo:
// int a = 5;
// int b;
// a++; // a incrementa o valor e vale 6
// b = a // b recebe o valor de a e assume o valor 6


// Pós-incremento
// Incrementa a variável após seu uso. No exemplo a seguir, primeiro é atribuído o valor de a a variável b e depois a é incrementada. Os valores de a e b, nesse caso, serão diferentes. Veja o código a seguir:
// int a = 5;
// int b = a++; // a será 6, b será 5


// Poderíamos escrever o código anterior da seguinte forma:
// int a = 5;
// int b;
// b = a // b recebe o valor de a e assume o valor 5
// a++; // a incrementa o valor e vale 6


// Operador decremento (--): diminui o valor de uma variável em 1. Esse operador é muito utilizado em loops e em outras situações em que é necessário diminuir o valor de uma variável repetidamente. Por exemplo, no trecho de código a seguir, a variável “i” é inicializada valendo 10 e na linha “i--” ela passa a valer 9.
// int i =10;
// i--; // i terá o valor 9 


// O operador decremento também pode ser utilizado de duas formas:
// Pré-decremento
// Decrementa a variável antes de seu uso, como apresentado no código a seguir:
// int a = 5;
// int b = --a; // a será 4, b será 4


// Pós-decremento
// Decrementa a variável após seu uso, conforme a seguir:
// int a = 5;
// int b = a--; // a será 4, b será 5