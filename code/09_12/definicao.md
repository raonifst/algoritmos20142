Recursividade
=============

Recursão é nome dado ao processo de resolução de problemas 
em que um dado PROBLEMA é reduzido em um ou mais SUBPROBLEMAS que:

i) são mais SIMPLES de resolver e

ii) tem a MESMA ESTRUTURA do problema original.


Considerando este processo de subdivisão, trataremos, em algum momento, 
de subproblemas eminentemente simples. Estes subproblemas TRIVIAIS 
possuem uma solução direta. A solução final é, então, obtida combinando 
os resultados de todos os subproblemas.

Para que este conceito seja bem entendido, é interessante considerar as
definições a seguir.

Todo problema computacional é uma coleção de "casos particulares" que, 
em geral, são chamados de INSTÂNCIAS.
Uma instância é uma (má) tradução da palavra inglesa 'instance' e tem o
mesmo sentido aplicado aos termos exemplo, amostra, exemplar, ilustração 
etc.

Reconsidere, por exemplo, o problema da ORDENAÇÃO. Tal como visto nas 
aulas anteriores, este problema consiste em rearranjar (ou seja, permutar) 
os elementos de um vetor A[1...n] de números de modo que ele se torne, 
por exemplo, crescente. 
Uma instância deste problema é um exemplo concreto (com dados específicos).  
Neste caso, cada instância é definida por um vetor A[1...n]. O vetor 
[5, 4, 1, 2, 7], por exemplo, define um instância da ordenação. 
O tamanho de uma instância, por sua vez, é quantidade de dados necessária para descrevê-la.

Estes conceitos levam a definição de um método que pode ser aplicado na 
criação de uma solução recursiva. Este método é apresentado a seguir:

SE a instância em questão é trivial

	ENTÃO resolva-a diretamente
SENÃO

	reduza a uma instância menor do mesmo problema
	aplique o método à instância menor
	volte à instância original.



Para maiores detalhes, consulte 

i) o livro Thinking recursively do Eric Roberts e 
ii) o capítulo 2 do livro Foundations of Computer Science do Aho e Ullman 
[em: http://infolab.stanford.edu/~ullman/focs.html].
