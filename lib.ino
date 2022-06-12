void motor_step(bool dirs, short steps, int mspeed )
{
  int x = 0;
  if(mspeed >= 5) x = 2;
  else if(mspeed == 4) x = 3;
  else if(mspeed == 3) x = 4;
  else if(mspeed == 2) x = 5;
  else if(mspeed <= 1) x = 6;
  
  short motor_steps = 2 *steps;
  digitalWrite(dirPin, dirs);
  
    for (int i = 0; i <= motor_steps; i++) 
    {
        digitalWrite(stepPin, motor_spin);
        delay(x);
        digitalWrite(stepPin, !motor_spin);
        delay(x);
        if (i == steps)
        {
          delay(3000);
          digitalWrite(dirPin, !dirs);
        }
    }

}
