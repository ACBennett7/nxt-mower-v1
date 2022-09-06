#pragma config(Sensor, S4,     sonarSensor,    sensorSONAR)

task main()
{
	int turns = 1;
	while(true){
		if(SensorValue[sonarSensor] > 20)
		{
			motor[motorB] = 75;
			motor[motorC] = 75;
			} else {
			if(turns % 2 == 0){
				motor[motorB] = 50;
				motor[motorC] = -50;
				wait(1.2);

				motor[motorB] = 75;
				motor[motorC] = 75;
				wait(1.25);

				motor[motorB] = 50;
				motor[motorC] = -50;
				wait(1.2);

				turns++;
				} else {
				motor[motorB] = -50;
				motor[motorC] = 50;
				wait(1.2);

				motor[motorB] = 75;
				motor[motorC] = 75;
				wait(1.25);

				motor[motorB] = -50;
				motor[motorC] = 50;
				wait(1.2);
				turns++;
			}
		}
	}
}
