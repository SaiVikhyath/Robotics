
void stop()
{
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
}

void forward()
{
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
}

void backward()
{
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
}

void left()
{
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
}

void right()
{
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
}

void left_forward()
{
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
}

void right_forward()
{
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
}

void left_backward()
{
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
}

void right_backward()
{
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, HIGH);
}

void setup() 
{
  // put your setup code here, to run once:
  // Motor M1 enable and control pins
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);

  // Motor M2 enable and control pins
  pinMode(6, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);

  // Motors enable pins
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  stop();
  delay(5000);
  
  forward();
  delay(5000);
  stop();
  delay(500);
  
  backward();
  delay(5000);
  stop();
  delay(500);
  
  left();
  delay(5000);
  stop();
  delay(500);
  
  right();
  delay(5000);
  stop();
  delay(500);
  
  left_forward();
  delay(5000);
  stop();
  delay(500);
  
  right_forward();
  delay(5000);
  stop();
  delay(500);
  
  left_backward();
  delay(5000);
  stop();
  delay(500);
  
  right_backward();
  delay(5000);
  stop();
  delay(500);
}
