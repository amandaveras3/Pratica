Descrição:
Este projeto permite que um LED acenda automaticamente quando o ambiente ficar escuro, usando um sensor de luz LDR (fotoresistor) e o Arduino. Ideal para aprender sobre sensores analógicos, divisores de tensão e controle de LEDs.

Componentes Necessários:
1 Arduino Uno (ou compatível)
1 LED (qualquer cor)
1 resistor de 220 Ω (para o LED)
1 resistor de 10 kΩ (para o LDR)
1 LDR (sensor de luz)
Jumpers (fios macho-macho)
1 protoboard

Montagem do Circuito:
LED:
Anodo (perna longa) conectado a resistor de 220 Ω e depois ao pino 9 do Arduino
Catodo (perna curta) conectado ao GND
LDR (Fotoresistor):
Um terminal conectado ao 5V
Outro terminal conectado ao pino A0
Do mesmo ponto do pino A0, conectar resistor de 10 kΩ ao GND
Este arranjo forma um divisor de tensão, que converte a variação de luz em valor analógico lido pelo Arduino.