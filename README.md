Vitória Marca Santa Lucia - 23200577
AED - M2 / 2024-2

O problema 605 do LeetCode consistia na análise de elementos adjacentes de um vetor. Isso foi ilustrado através de uma "cama de flores", onde o plantio da flor seria possível caso o elemento estivesse vazio ( = 0 ) e também seus elementos adjacentes. 

Bem, foram testados no meu código todos os casos do LeetCode, onde a submissão foi aceita. Localmente, testei alguns casos como:
1. todos os elementos vazios, mas com mais plantas a serem plantadas do que o permitido;
2. caso proposital falso, onde o vetor era [1,1,0,0,1] e plantas = 1;
3. vetor com um unico elemento, vazio, mas com 2 plantas a serem plantadas.

Infelizmente, entreguei em aula um código com erro. Ele sequer iria copilar pois o programa estava tentando acessar um espaço na memória que não pertencia ao vetor.
O erro foi no seguinte condicional: else if ((flowerbed[i+1] == 0) && (flowerbed[i-1] == 0))
O objetivo era acessar os elementos adjacentes de um dado elemento que estava sendo analisado, mas o condicional não garantia que o elemento analisado nesse if não poderia ser o primeiro, nem o último. "i+1" não existe caso seja o último, assim como "i-1" não existe caso seja o primeiro.
A lógica estava correta, mas feita de uma forma bruta e com bastante repetição de código (que foi corrigida). 