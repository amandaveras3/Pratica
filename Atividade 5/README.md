Descrição:
Este projeto simula um semáforo de carros com botão para pedestres. Ao apertar o botão, o semáforo de carros fica vermelho e o LED verde do pedestre acende, permitindo a travessia.

Objetivo:
Aprender a ler entradas digitais com digitalRead.
Usar if para decisões baseadas em ação externa.
Implementar lógica de debounce para botões.

Componentes:
Arduino Uno
LEDs para carros: Vermelho, Amarelo, Verde (3)
LEDs para pedestres: Vermelho, Verde (2)
Resistores 220 Ω (5)
Push-button
Jumpers
Breadboard

Esquema de ligação:

LEDs dos carros:
Vermelho → pino 13 → resistor → GND
Amarelo → pino 12 → resistor → GND
Verde → pino 11 → resistor → GND
LEDs dos pedestres:
Vermelho → pino 10 → resistor → GND
Verde → pino 9 → resistor → GND
Botão:
Pino 2 → GND, usando INPUT_PULLUP

Funcionamento:
O semáforo de carros segue o ciclo normal: verde → amarelo → vermelho.
Ao pressionar o botão, o semáforo de carros muda para vermelho.
O LED verde do pedestre acende, permitindo a travessia.
Após um tempo definido, o sistema retorna ao ciclo normal.