void setup() 
{                
  pinMode(9, OUTPUT);//Mengatur Digital Pin 9 sebagai Output.     
}

void loop() 
{
  digitalWrite(9, HIGH);   // Mengatur LED agar Menyala.
  delay(5000);               // Tunggu sampai 5 detik.
  digitalWrite(9, LOW);    // Mengatur LED agar Mati.
  delay(5000);               // Tunggu samapi 5 detik.
}
