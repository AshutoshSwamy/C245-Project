float floatMap(float x, float in_min, float in_max, float out_min, float out_max){
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
  }

void setup() {
  Serial.begin(9600);

}

void loop() {
  int analog_value = analogRead(4);
  float voltage = floatMap(analog_value, 0, 4095, 0, 3.3);
  Serial.print("Analog: ");
  Serial.print(analog_value);
  Serial.print(", Voltage: ");
  Serial.print(voltage * 1000);
  delay(1000);
}
