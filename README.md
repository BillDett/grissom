# USS Grissom
Strobe and navigation lights for USS Grissom

Designed for Arduino (or ATTiny85) to drive a bank of white strobes and a bank of red/green navigation lights.

![breadboard schematic](https://github.com/BillDett/grissom/blob/main/grissom_bb.png)

Trick is to use two NPN transistors to switch each bank using only two pins. This also lets you add as many LEDs as you need (within the tolerance of the transistors) without drawing too much current thru your ATTiny.
