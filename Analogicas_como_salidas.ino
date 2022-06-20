void setup() {
// put your setup code here, to run once:
// coloque aqui el codigo de configuracion, correra un sola vez:
pinMode(14, OUTPUT); // configura ‘14’ como salida
pinMode(15, OUTPUT); // configura ‘15’ como salida
pinMode(16, OUTPUT); // configura ‘16’ como salida
pinMode(17, OUTPUT); // configura ‘17’ como salida
}
void loop() {
// put your main code here, to run repeatedly:
// coloque aqui el codigo principal que correra repetidamente:
digitalWrite(14, HIGH); // deposita en el '14' un valor HIGH
digitalWrite(15, LOW); // deposita en el '15' un valor LOW
digitalWrite(16, HIGH); // deposita en el '16' un valor HIGH
digitalWrite(17, LOW); // deposita en el '17' un valor LOW
delay(1000); // espera 2 segundos
digitalWrite(14, LOW); // deposita en el '14' un valor LOW
digitalWrite(15, HIGH); // deposita en el '15' un valor HIGH
digitalWrite(16, LOW); // deposita en el '16' un valor LOW
digitalWrite(17, HIGH); // deposita en el '17' un valor HIGH
delay(1000); // espera 2 segundos
}
