# Auto-Fan
A desk fan that automatically turns on according to humidity and temperature. Made with Arduino Uno.
Yes I recycled an old pocky box to make the stand for the fan, mechanical engineering is not my thing. I decided not to set it up on a high stand to avoid it taking up much space. It's my first project so the wiring isn't the cleanest.

<img src="https://github.com/OsamaMIT/Auto-Fan/assets/114868997/a0cebc94-8979-45e1-8586-99c62d8ce1a6" width="450" />
<img src="https://github.com/OsamaMIT/Auto-Fan/assets/114868997/5d65e36c-b94e-4e95-8e77-d20a7c0c072b" width="450" />

# Testing
By clasping the sensor, it increases the humidity around it and therefore the sensor. The code is set so the fan automatically runs when it is over 55.
Afterwards I let the humidity drop to 55, where the fan automatically stops.

[![humddemo](http://img.youtube.com/vi/ZbTbx0sURJI/0.jpg)](http://www.youtube.com/watch?v=ZbTbx0sURJI "Automatic Fan (Humidity Demo)")

The code was set so the fan automatically runs when the temperature is above 25.
I had no way of manipulating temperature, so I instead show it automatically turning on when it runs and detects that the temperature is 26°C.

[![tempdemo](http://img.youtube.com/vi/kgGQG-pPAWs/0.jpg)](http://www.youtube.com/watch?v=kgGQG-pPAWs "Automatic Fan (Temperature Demo)")

# Build
I used a DHT11 module instead of a TMP, however since Tinkercad didn't have it I placed a TMP on the diagram instead. The DHT11 module only has 3 pins versus the typical DHT11 where one had to have a resistor in series, so I didn't require one. Most DHT11 modules I have seen online tend to have the pins as `(VCC, DATA, GND)` however mine was `(DATA, VCC, GND)`.

### Prototype
Connected everything's VCC in parallel as per usual.

![auto_fan_prototype](https://github.com/OsamaMIT/Auto-Fan/assets/114868997/8361c1af-291e-40de-8448-b1b1b36d600d)

### Final
I had to change the VCC connections so the motor was directly connected to the 5V pin on the board and the sensor to the 3.3V.
While inconvenient, this was necessary as previously the motor would need a push before being able to rotate the fan on its own as the voltage wasn't enough since it only got half of the total voltage while connected in parallel.

![auto_fan_final](https://github.com/OsamaMIT/Auto-Fan/assets/114868997/28a1f0f8-b014-487b-8247-90e37f3e85b0)
