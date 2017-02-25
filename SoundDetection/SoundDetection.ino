/* 
 *  Código creado por: Andrés Mauricio Morales Martínez 
 *  el 25-02-2017. Algoritmo principal, de detección 
 *  de ondas sonoras ambientales, por medio de sensor de 
 *  ruido "Groove", por medio de entradas análogas que 
 *  posteriormente serán exportadas alambiente processing 
 *  por medio de comunicación serial, con el fin de 
 *  representar graficamente lo valores de entrada
 */

// Declaración de variables 
const int ANALOG_PIN = 0; 
int inputValue;
 
void setup() {
  //  Algoritmo inicial de configuración general del proyecto 
  Serial.begin(9600); // Puerto serial 9600 Baudios  
}


void loop() {
  // Algoritmo de repetición general
  inputValue = analogRead(ANALOG_PIN);
  exportValue = map(inputValue, 0, 255, 0, 100); // Proporcion de Valores con funcion Map   
  Serial.write(exportValue); 
}


