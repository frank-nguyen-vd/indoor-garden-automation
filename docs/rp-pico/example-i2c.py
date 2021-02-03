import machine

master_address = 0x00
arduino_address = 0x08
sda = machine.Pin(0)
scl = machine.Pin(1)
i2c = machine.I2C(master_address, sda=sda, scl=scl, freq=300000)
i2c.writeto(arduino_address, b'Hello from Pico')