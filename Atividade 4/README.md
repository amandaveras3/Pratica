Descrição
Este projeto simula um semáforo de carros com botão para pedestres. Ao apertar o botão, o semáforo de carros fica vermelho e o LED verde do pedestre acende, permitindo a travessia.

Objetivo
Aprender a ler entradas digitais com digitalRead.
Usar if para decisões baseadas em ação externa.
Implementar lógica de debounce para botões.

Componentes
Arduino Uno
LEDs: Vermelho, Amarelo, Verde para carros (3)
LEDs: Vermelho, Verde para pedestres (2)
Resistores 220 Ω (5)
Push-button
Jumpers
Breadboard

Esquema de ligação
LEDs dos carros: Pinos 13 (vermelho), 12 (amarelo), 11 (verde) → resistor → GND
LEDs dos pedestres: Pinos 10 (vermelho), 9 (verde) → resistor → GND
Botão: Pino 2 → GND, usando INPUT_PULLUP