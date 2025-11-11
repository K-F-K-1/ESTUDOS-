## Guia de C++

Este é um guia de estudos preparado por mim, com os materiais que a minha professora de Programação de computadores disponibilizou para a minha turma. Está é uma documentação de meus estudos e foi acurada por um iniciante, sempre confira informações importantes e se certifique de estudar com outros materiais de maior confiabilidade. 

### Materiais de referência 
- [Introdução a C++ (Profa Regiane Kawasaki)](introdução_cpp_kawasaki.pdf)
## Básico 
### Estrutura 
 Está é a estrutura básica de um programa qualquer em C++:

```
#include <iostream>
using namespace std;
int main () 
{
     return 0;
     }

```

#### Oque cada coisa significa ?

`#include <iostream>` --> Aqui se declara as bibliotecas que serão utilizadas no programa, essa demarcação é feita pelo comando `#include`no início do programa e a biblioteca, nesse caso a **iostream**, é posta entre os sinais de menor e maior : **<>**

`using namespace std;`--> O `std;`serve para dizer ao programa que tudo na biblioteca padrão de nomes reservados, a Standard= `std`, você estará utilizando. Caso você não use o `using namespace std; ` você terá que por `std::`antes de cada comando básico em C++, como cin e cout. Ou seja, com ele você pode escrever as palavras reservadas sem o prefixo `std::`

```
std::cout -> Você terá que escrever isso sempre se não usar o comando 
cout-> Mas usabdo ele, você pode simplesmente usar a palavra reservada que vai funcionar perfeitamente 
```

`int main ()`-> É aqui que seu programa começa a rodar de verdade, este comando identifica o início de seu programa, a seguir, você irar por todas as instruções dentro do par de chaves **{}**, para que seja tudo executado perfeitamente 

`return 0;`-> Este comando serve para sinalizar para o sistema operacional de que tudo dentro do código ocorreu bem e está tudo funcional, ele é utilizado praticamente sempre na função `main() `, mas também pode aparecer em outras funções. Alguns programas simples em C++ conseguem rodar tranquilamente sem que você deixe explícito o `return 0;`, isso por que nas versões mais recentes do C++ o compilador entende automaticamente que o `return 0 `está lá e roda o programa normalmente, somente em alguns casos onde o código é particularmente complexo que isso não funciona, mas como estamos no nível básico isso não nos convém agora. A principal razão pela qual é muito aconselhável usar o `return 0;` é por que isso é considerado uma boa prática, já que isso facilita a manutenção de um terceiro no seu código.  

##### Aqui vai um exemplo reunindo todos estes conceitos 

```
#include <iostream>
using namespace std;
int main()
{
cout<< "Olá mundo! Programar em C++ é melzinho na chupeta hehehe";
return 0;
}


```

## Tipos de dados 

Aqui vão alguns tipos de dados fundamentais em C++:

| Tipo   | Bytes | Intervalo            | Uso                           |
| ------ | ----- | -------------------- | ----------------------------- |
| char   | 1     | -128 a 127           | Um caractere                  |
| int    | 4     | -2.1 bi a 2.1 bi     | Números inteiros              |
| float  | 4     | 1.2×10⁻³⁸ a 3.4×10³⁸ | Decimais com precisão simples |
| double | 8     | 1.2×10⁻³⁸ a 3.4×10³⁸ | Decimais com dupla precisão   |
| bool   | 1     | true/false           | Valores lógicos               |
### char

Este é utilizado para representar valores alfanuméricos unitários de forma que eles ocupem menos espaço, ocupando então apenas 1 byte na memória. Os símbolos compreendidos são os chamados **caracteres**: símbolos, letras e algarismos. todos esses caracteres  são representações de números compreendidos internamente no intervalo de [-128,127]
- char letra = 'A'
- char número = '7'
- char símbolo = '!'
### string 

Usado para representar textos, a diferença para o char é que ele armazena uma sequência de caracteres, e ocupa um número variado de bytes, enquanto o char só guarda 1 único caractere. 
- string = " Cale-se, cale-se , cale-se se não você me deixa looouco!"
- string = "Ninguém tem paciência comigo..."
- string = "Não contavam com minha astúcia!"
### int
Este representa os números compreendidos nos conjunto dos números inteiros (ℤ). O intervalo de números aceitos em compiladores varia de versão para versão mas usualmente o intervalo é de<u> 2.147.483.648</u> até<u> 2.147.483.647</u>. Ele ocupa geralmente 2 bytes de memória.
- int = -1922
- int = 44
- int = 0 

### unsigned / unsigned int
Este é usado para representar valores compreendidos no conjunto dos números naturais (ℕ). Embora haja diferença entre compiladores , usualmente o intervalo de números aceitos é de 0 até <u>2.147.483.647</u>
- unsigned = 9
- unsigned = 1344
- unsigned = 55

### short / short int 
Utilizado para representar valores com menos precisão que o **int** ,dependendo do compilador ele ocupa 2 bytes de memória 

### long / long int 
Dependendo do compilador, ele é utilizado para representar valores com mais precisão do que o int, ele ocupa 4 bytes de memória r. 

### long long / long long int
Este traz uma precisão maior ainda do que o long dependendo do compilador, ele ocupa 8 bytes de memória. 

### bool

Utilizado para representar valores lógicos que também recebem o nome de valores booleanos em referência a teoria de George Boole, os dois valores possíveis são true (verdadeiro) e false (falso). Estes dados geralmente são usados para representar o resultados de uma expressão condicional.
- Pepsi > Coca-cola = true
- 7 > 8 = false 
- 12 > 9 = true 

### float
Usado para representar valores que estão em ponto flutuante, apresenta uma precisão simples quando utilizado, ele consome 4 bytes de memória, dependendo do compilador, o intervalo  de representações está compreendido entre  `1.2×10⁻³⁸` até `3.4×10³⁸`

- float = 7.123
- float = -34.90
- float = 1.228272272772

### double
 Este apresenta uma dupla precisão  de representação em comparação ao **float** para números flutuantes,  consome 8 bytes , dependendo do compilador o intervalo compreendido está entre  `1.2×10⁻³⁸` até `3.4×10³⁸`

### long double 
Este representa valores em ponto flutuante com uma precisão maior ainda do que o double, consome pelo menos 10 bytes.








