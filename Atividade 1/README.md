# Descrição
Este é o primeiro contato com a programação de hardware utilizando o Arduino. O projeto Pisca LED é conhecido como o “Olá, Mundo!” da eletrônica. Ele serve para compreender a estrutura básica de um programa (chamado de sketch) e verificar o funcionamento do ambiente de simulação, seja no Tinkercad ou no Arduino físico. O objetivo é simples: fazer um LED acender e apagar em intervalos regulares, controlado por software. Isso ajuda o estudante a entender o funcionamento das saídas digitais e a temporização usando o comando delay().

# Objetivos
Compreender a estrutura básica do código Arduino (setup() e loop()).
Aprender a configurar um pino como saída digital.
Utilizar comandos básicos de controle (digitalWrite() e delay()).
Testar a comunicação entre hardware e software.

# Componentes
1 LED comum (qualquer cor)
1 resistor de 220 Ω
1 placa Arduino Uno
Jumpers para ligação

# Esquema de Montagem
O pino 13 do Arduino é conectado ao ânodo (perna longa) do LED por meio de um resistor de 220 Ω.
O cátodo (perna curta) do LED é ligado ao GND.
Esse resistor é importante para limitar a corrente elétrica e evitar a queima do LED.

# Explicação do Funcionamento
A função setup() roda apenas uma vez, configurando o pino 13 como uma saída. Já a função loop() é executada continuamente.
Dentro dela, o comando digitalWrite(13, HIGH) acende o LED, e após 1 segundo (delay(1000)), o comando digitalWrite(13, LOW) apaga o LED.

O ciclo se repete indefinidamente, criando o efeito de piscar.
