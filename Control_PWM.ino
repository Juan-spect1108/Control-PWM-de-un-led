
// Designed by: Juan Rodrigo Guzman Martinez


int LED= 3; // Declaramos el nombre de LED en el pin digital 3
int BRILLO; // Declaramos una variable llamada BRILLO

void setup() {
  pinMode(LED, OUTPUT); // Declaramos LED como una salida

}

void loop() {

// Bucle for para incrementar el brillo del led  
for(BRILLO= 0; BRILLO <256; BRILLO++){
  analogWrite(LED, BRILLO);
  delay(15);
  
}

// Bucle for para disminuir el brillo del led
for(BRILLO= 255; BRILLO >=0; BRILLO--){
  analogWrite(LED, BRILLO);
  delay(15);
  
}

}
