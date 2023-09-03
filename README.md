# Metodos_de_Ordenacao_C

Este repositório contém implementações em C de vários algoritmos de ordenação comuns. Os algoritmos incluídos são:

1. Bubble Sort (BubleSort.c)
2. Heap Sort (HeapSort.c)
3. Insertion Sort (InsertionSort.c)
4. Merge Sort (MergeSort.c)
5. Quick Sort (QuickSort.c)
6. Radix Sort (RadixSort.c)
7. Selection Sort (SelectionSort.c)

## [Bubble Sort](BubbleSort.c)

O Bubble Sort é um algoritmo de ordenação simples que compara pares de elementos adjacentes e os troca se estiverem fora de ordem. O processo continua até que nenhum elemento seja trocado. É eficaz para pequenos conjuntos de dados, mas não é eficiente para grandes conjuntos de dados.

## [Heap Sort](HeapSort.c)

O Heap Sort é um algoritmo de ordenação baseado em árvore binária que transforma o conjunto de dados em uma estrutura de heap (árvore binária especial) e, em seguida, extrai repetidamente o elemento máximo (ou mínimo) da heap.

## [Insertion Sort](InsertionSort.c)

O Insertion Sort é um algoritmo de ordenação que constrói uma lista ordenada um item de cada vez, movendo elementos não ordenados para a posição correta.

## [Merge Sort](MergeSort.c)

O Merge Sort é um algoritmo de ordenação eficiente que divide o conjunto de dados em duas metades, ordena cada metade e, em seguida, combina as duas metades ordenadas em uma única lista ordenada.

## [Quick Sort](QuickSort.c)

O Quick Sort é um algoritmo de ordenação baseado na técnica de "dividir e conquistar". Ele escolhe um elemento pivot e divide o conjunto de dados em duas partições, uma com elementos menores que o pivot e outra com elementos maiores. O processo é repetido recursivamente nas partições.

## [Radix Sort](RadixSort.c)

O Radix Sort é um algoritmo de ordenação que ordena os elementos com base em seus dígitos individuais. Começa ordenando os dígitos menos significativos e progride para os dígitos mais significativos.

## [Selection Sort](SelectionSort.c)

O Selection Sort é um algoritmo de ordenação simples que encontra repetidamente o elemento mínimo (ou máximo) a ser colocado na posição apropriada. Ele possui uma complexidade de tempo pior do que outros algoritmos, como o Merge Sort e o Quick Sort.

Cada algoritmo tem sua própria implementação em um arquivo separado neste repositório. Sinta-se à vontade para explorar e usar essas implementações em seus próprios projetos.

## Requisitos

- Compilador C (por exemplo, GCC) instalado no seu sistema.

## Como Compilar e Executar

1. Abra o terminal.
2. Navegue até o diretório onde o arquivo de código-fonte do programa está localizado.
3. Compile o programa com o comando: `gcc bubbleSort.c -o bubbleSort`
4. Execute o programa com o comando: `./bubbleSort`
