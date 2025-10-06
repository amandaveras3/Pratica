# Programação Básica – Sistemas Embarcados com Arduino
Este repositório reúne uma série de atividades práticas desenvolvidas na disciplina de Sistemas Embarcados, com foco na programação básica utilizando a plataforma Arduino. O conteúdo foi criado para introduzir os conceitos fundamentais de eletrônica digital, lógica de programação e controle de hardware por meio de código.
As práticas foram desenvolvidas no ambiente Tinkercad Circuits, que permite montar e simular circuitos eletrônicos diretamente no navegador. Cada projeto apresenta um circuito, o código-fonte em C/C++, explicações detalhadas e objetivos educacionais específicos.

# Objetivos Gerais:
Introduzir o aluno à lógica de programação aplicada a hardware.
Ensinar a estrutura de um programa Arduino (setup e loop).
Desenvolver o raciocínio lógico com o uso de estruturas de decisão e repetição.
Aplicar conceitos de entrada e saída digitais e analógicas.
Explorar sensores, atuadores e componentes eletrônicos básicos.
Estimular o uso de simulações antes da prototipagem física.

# Ambiente de Desenvolvimento:
Os projetos podem ser simulados no Tinkercad ou executados na placa Arduino Uno física.
Para usar o Tinkercad, basta criar uma conta gratuita, acessar a aba de circuitos, montar o circuito e colar o código.
Para usar o Arduino físico, é necessário o software Arduino IDE, disponível em www.arduino.cc.

# Estrutura do Repositório:
Cada pasta contém o código, o circuito e um README próprio explicando o funcionamento detalhado do projeto.

# Projeto 1 – Pisca LED
Primeiro experimento com Arduino. Um LED pisca em intervalos regulares, representando o “Olá, Mundo!” do hardware.
Conceitos: pino digital, pinMode, digitalWrite e delay.
Objetivo: compreender o ciclo básico de execução e temporização.

# Projeto 2 – Sequência de LEDs
Criação de uma sequência de luzes controlando três LEDs em série.
Conceitos: laço for, arrays e repetição de ações.
Objetivo: aprender a automatizar tarefas e reduzir código repetitivo.

# Projeto 3 – Semáforo de Pedestres
Simulação de um cruzamento com botão de pedestres.
Conceitos: leitura digital, condicionais if/else e lógica de controle.
Objetivo: permitir interação do usuário e tomada de decisão pelo programa.

# Projeto 4 – Luz Noturna Automática
Acende um LED automaticamente quando o ambiente está escuro, usando um sensor de luz (LDR).
Conceitos: leitura analógica, sensores e divisor de tensão.
Objetivo: interpretar sinais variáveis e controlar saídas com base em medições.

# Projeto 5 – Sensor de Estacionamento
Usa um sensor ultrassônico para medir a distância de objetos e emitir sons no buzzer conforme a proximidade.
Conceitos: sensores ultrassônicos, cálculo de tempo e controle de som com tone.
Objetivo: trabalhar com medições de tempo e alertas sonoros condicionais.

# Projeto 6 – Semáforo Simples
Versão reduzida do semáforo, alternando automaticamente entre os LEDs verde, amarelo e vermelho.
Conceitos: controle de fluxo e tempo.
Objetivo: consolidar o uso de temporização e controle sequencial.

# Habilidades Desenvolvidas:
Durante as práticas, o aluno desenvolve lógica de programação aplicada a sistemas embarcados, interpretação de circuitos elétricos, manipulação de sensores e atuadores, raciocínio lógico, resolução de problemas e noções básicas de automação e controle.

# Componentes Utilizados:
Arduino Uno, LEDs, resistores de 220 Ω e 10 kΩ, botão, LDR, sensor ultrassônico HC-SR04, buzzer piezoelétrico e jumpers.
