# OISC sem nome

Esse é um projeto de implementação de uma cpu de uma instrução. Ela executa a instrução subleq lida da memória a partir de um arquivo.

O arquivo assembler.cpp é um assembler estático que fiz para testes. Para escrever outro programa, mude os valores no array prog.

Para mudar o tamanho das palavras mude o tipo na linha onde estiver o #define word. Vale ressaltar que para rodar um programa tanto o assembler e a cpu devem ser compilados com o mesmo tamanho de palavra.

Para compilar simplesmente execute g++ nomedoarquivo -o nomedobinario
