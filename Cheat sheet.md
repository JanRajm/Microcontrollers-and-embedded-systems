# Cheat sheat
### IIR Filtr
[cv. 4: ](https://github.com/JanRajm/Microcontrollers-and-embedded-systems/tree/MSK/cv04/Core/Src)

### UART
[cv. 5: ](https://github.com/JanRajm/Microcontrollers-and-embedded-systems/blob/MSK/cv05/cv05/Core/Src/main.c)

### Neblokující čekání
- [cv. 10:](https://github.com/JanRajm/Microcontrollers-and-embedded-systems/blob/MSK/cv10/Core/Src/main.c)
  - podmínka na ř. 126
- [cv. 4:](https://github.com/JanRajm/Microcontrollers-and-embedded-systems/blob/MSK/cv04/Core/Src/main.c)
  - podmínka na ř. 174
```c
if(HAL_GetTick() > stary_cas + ZPOZDENI){
  ...;
}
```

### Display
[cv. 4:](https://github.com/JanRajm/Microcontrollers-and-embedded-systems/tree/MSK/cv04/Core/Src)
#### Piny displaye:
 - PB3 = SCT_CLK
 - PB4 = SCT_SDI
 - PB5 = SCT_NLA
 - PB10 = SCT_NOE

### Přehled cvičení:
 - 3. enkodér
 - 4. ADC, NTC teploměr, IIR, display, bargraf
 - 5. UART, EEPROM
 - 6. 1-wire teploměr, ADC, NTC teploměr, display
 - 7. freeRTOS, akcelerometr

### Nezapomenout na:
#### Tlačítka:
 - PC0 = S2
 - PC1 = S1

 - PA4 = LED1
 - PB0 = LED2

