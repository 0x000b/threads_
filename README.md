<h1 align="center">Um estudo sobre threads e java</h1>

<p>Este projeto têm como objetivo espalhar meu conhecimento sobre threads usando Java e um pouco de C, tratarei de citar e explicar sobre conceitos computacionais relacionados, tais como concorrencia, região critica e técnicas de exclusão mutua. Estes conceitos são dificeis de entender inicialmente, pois precisa-se de uma base de entendimento de sistemas operacionais, mas com este breve estudo, pretendo atiçar sua curiosidade e indicar novos estudos.</p>



<div align="center">
<h2>Sumário</h2>

![Quem sou eu?](#quemsoueu)

![Um breve conceito sobre escalonadores](#escalonadores)

![Threads](#threads)

</div>


<div id="quemsoueu" align="center">
<h2 align="center">Quem sou eu?</h2>


![Foto de perfil](https://avatars.githubusercontent.com/u/77945215?v=4)


<p align="left"> Olá, meu nome é Henrique Liberato, atualmente sou estudante de Ciências da Computação no Instituto Federal de São Paulo - Campus Presidente Epitácio, meu foco atual é estudar Java em direção a uma carreira de dev, como engenheiro de software ou backend, sempre busquei entender bem os conceitos de computação, e com este pequeno projetinho pretendo passar um pouco do que eu sei.</p>
</div>

<div id="escalonadores">
<h2 align="center">Um breve conceito sobre escalonadores</h2>

<p>
De nada adianta falarmos de threads e seus pontos principais sem antes sabermos sobre escalonadores, pois são conceitos que se relacionam completamente , porém, falar de tudo sobre eles levaria um tempo enorme, poderiamos sentar em nossas cadeiras e ver a nossa vida passar enquanto lemos sobre, então levantarei tópicos resumidos sobre o assunto, visando apenas buscar pontos de relação de escalonadores com o assunto principal (Threads).
</p>

<p> Nos computadores atuais, que há diversos processos em execução ao mesmo tempo que competem pela CPU, dificilmente haverá espaço para todos, logo, há de escolher um para ser executado no momento, mas quem faz essa escolha? os escalonadores, usando de algum algoritmo de escalonamento, que nada mais é o metodo que ele usará para saber quem será o próximo a ser executado em uma fila de processos.</p>

<p>Há 3 categorias de escalonamento, Lote, Interativo, Tempo real, mas falarei pouco sobre os metodos pois o nosso foco é entender threads.</p>

- Algoritmos de escalonamento em **lote** não são usados com foco no usuário, logo, não há a necessidade de esperar por respostas, então o escalonador libera o processo para realizar seu trabalho de forma completa, sem atrasos

- Algoritmos de escalonamento **interativo** é usado quando há a usuários, ou seja, nós. Nele, a troca de processos é essencial, não podendo deixar um processo fazer oque quiser com o tempo que quiser, pois um usuário usa varias coisas ao mesmo tempo, então usa-se da troca rapida de processos para gerar uma sensação de que tudo está rodando em conjunto, quando na verdade, está tendo uma sequencia de diversas execuções de processos diferentes.

- Algoritmos de escalonamento em **Tempo real** têm uma semelhança com o Interativo, porém, não pode-se ter uma demora no tempo de execução de um processo, a diferença maior entre um de tempo real e interativo é que os de tempo real visa a execução de programas a mão.

</div>

<div align="center" id="threads">
<h2>Threads</h2>

<p align="left">Dado o grande avanço técnologico e a evolução de sistemas, tornou-se desejavel ter softwares que realizam mais ações ao mesmo tempo, de uma forma mais eficiente, trouxe a ideia de usar um processo dentro de outro, isto é, como se eles fossem processos separados, mas que compartilham o mesmo espaço de endereçamento.</p>

![Threads](https://user-images.githubusercontent.com/77945215/180703230-ece0b2fa-2af6-4b20-9915-7bfedf6c0cb2.png)

(Foto extraída do treina web)

<p align="left">Mas... como que ocorre isso? Bom, imagine comigo um programa que faça leitura de contas bancárias e calcula seus gastos, cobranças, saldo, etc. Contas são grandes, há muitos dados a serem lidos e calculados, como podemos fazer as duas coisas ao mesmo tempo? criaremos um processo neste programa, onde o processo pai(gerador da thread) lê os dados e cria a thread(processo filho) para realizar os calculos, agora temos alguém calculando e outro lendo, e podemos ainda otimizar mais, criando mais threads, porém como tudo nessa vida, há problemas, que falaremos jajá.</p>
</div>








