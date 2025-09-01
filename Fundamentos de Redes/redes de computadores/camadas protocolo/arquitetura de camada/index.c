/*
Arquitetura de camadas

Todas as atividades na internet que envolvem duas ou mais entidades remotas que se comunicam são governadas por um protocolo.


Um protocolo define o formato e a ordem das mensagens trocadas entre duas ou mais entidades comunicantes, bem como as ações realizadas na transmissão e/ou no recebimento de uma mensagem ou outro evento.


Um protocolo de rede e um protocolo humano são muito semelhantes. Quando nos encontramos com outra pessoa, segundo as regras da boa educação, devemos fazer um cumprimento antes de fazer uma pergunta, ou pedir uma ajuda.


Comentário
Inicialmente, fazemos um cumprimento, como um “oi” e esperamos receber outro “oi” como resposta, ou, por exemplo, falando um “bom dia” e esperando receber um “bom dia” de volta. A partir desse ponto, podemos perguntar as horas, por exemplo. Ou seja, existem mensagens específicas que enviamos e ações específicas que realizamos em reação às respostas recebidas. Também podemos realizar outros eventos quando a resposta é diferente da esperada.


O mesmo é válido para as redes de computadores. Para que determinada ação seja realizada entre dois componentes de rede, eles devem utilizar o mesmo protocolo.


Para facilitar o desenvolvimento e evolução das redes, os projetistas de rede organizaram os protocolos, e o hardware e o software de rede que os executam, em camadas.


Em um modelo de serviço:


Cada protocolo é executado em uma camada.
Cada camada oferece seus serviços à camada acima dela, executando certas ações dentro dela, e utilizando os serviços da camada diretamente abaixo dela.
O ponto de ligação entre uma camada e outra camada é denominado interface.
*/