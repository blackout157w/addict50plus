# addict50plus Keyboard BUILD GUIDE
![main](images/main.png)
# PARTS LIST
![plist](images/plist.png)

![ple1](images/ple1.jpg)

PCB board and each acrylic plate.

![mid](images/mid.jpg)

The bottom middle plate has a frame shape.

# FIRMWARE
![zero](images/zero.jpg)

First, install the Vial firmware on the microcontroller and test whether it works.

While pressing the BOOT button on the RP2040-ZERO, connect it to the PC using the USB Type-C cable.

![stre](images/stre.png)

Since it starts with mass storage, copy the addict50plus_Vial.uf2 file into the automatically opened folder.

The file can be downloaded from my GitHub.

![vial](images/vial.jpg)

After restarting the microcomputer, check if you can connect from the Vial homepage using the Vial app or browser.

If the connection is successful, the default keymap will be displayed.

You can freely change the key settings on this screen.

For details, refer to the Vial keyboard site.

# SOLDERING
![daio](images/daio.jpg)

Solder the components to the board.

Solder the diode first.

![daio2](images/daio2.jpg)

The frame to the left of the letter D1 is where the diode will be installed.

Install it so that the vertical line on the diode surface is on the left.

I think it will be easier to work if you solder it to one side of the board in advance.

Diode Solder in the same direction except for D51, where a rotary encoder can be attached.

![mos](images/mos.jpg)

Next, solder the MOSFET and chip resistor for the LED level shift circuit.

The small part in the image is the MOSFET.

If you are not attaching an LED, you can skip this step.

![mos2](images/mos2.jpg)

Like the diode, I think it will be easier to install if you solder it to one spot on the board in advance.

![chip](images/chip.jpg)

These two chip resistors are also soldered to one side of the board and then installed.

![chip2](images/chip2.jpg)

The installed resistor has no directionality, so it can be installed in either direction.

![led](images/led.jpg)

Next, attach the LED, but if you are not attaching an LED, you can omit this.

If you are using a temperature-controlled soldering iron, you can usually solder at around 330℃ using leaded solder, but it is better to lower the temperature a little more than that, which may damage the LED.

I think this can be prevented.

If you do not have a temperature-controlled soldering iron, I think it is a good idea to avoid applying the soldering iron to one LED continuously for a long time.

![led2](images/led2.jpg)

If you have a test microcontroller, check the LED operation here.

![led3](images/led3.jpg)

RED

![led4](images/led4.jpg)

GREEN

![led5](images/led5.jpg)

BLUE

![led6](images/led6.jpg)

Install all LEDs so that the terminal with the notch is at the mark on the top right.

As with other mounting parts, I think it will be easier to install if you solder that part in advance.

![mx](images/mx.jpg)

Next, install the socket for the MX switch in the same direction as the mark on the board.

I think it will be easier to work if you solder only the pad on one side as shown in the photo.

![re](images/re.jpg)

Only SW51 has the option to select either a key switch or a rotary encoder.

If you want to attach a rotary encoder, I think it is better to solder the microcontroller first and then install it.

For the diode D51, make sure the vertical line is at the bottom. 

Install in the direction shown in the image.

![mcu](images/mcu.jpg)

To install the microcomputer, set it as shown in the photo.If you set the short end of the pin header included with RP2040-ZERO on the microcomputer side, the height will be just right and it will be easier to work.

![mcu2](images/mcu2.jpg)

Solder the short end of the pin header. 

There is no need to cut it because the height will be just right.

![mcu3](images/mcu3.jpg)

Solder from the end of each pin header to prevent it from shifting, then solder all pins.

![mcu4](images/mcu4.jpg)

Soldering complete.

![mcu5](images/mcu5.jpg)

On this side, cut off the extra length of the pin header with nippers and solder all the pins.

![mcu6](images/mcu6.jpg)

Soldering complete.
# CASE
![pcbacry](images/pcbacry.png)

Installation order of each plate 
1. Insert the screw from the top side of the PCB board and attach the spacer.
2. Place the 3mm middle acrylic on the bottom side so that it fits into the spacer hole.
3. Place the 2mm acrylic on the bottom side and attach it with screws.

![spe2](images/spe2.jpg)

The image of the installed spacer. 
viewed from the side is upside down.

![acry](https://github.com/user-attachments/assets/d17c68dd-e037-48b1-9191-a806dde19553)

Peel off the bottom middle acrylic protective sheet. Be careful not to break it as it is thin.

![acry2](https://github.com/user-attachments/assets/819f9d5f-6d78-4225-bae9-80791923589f)

Attach the middle plate by fitting the spacer into the acrylic hole.

![acry3](https://github.com/user-attachments/assets/31c3a761-7376-4d06-b235-d52e63c68ce4)

Place the middle plate in a frame shape as shown in the image.

![acry4](https://github.com/user-attachments/assets/888261e6-15cb-4546-9e56-255a6dd1eb7a)

Place 2mm of acrylic on the bottom side and secure with screws.

The rubber feet stabilize the position of the image.When using a rotary encoder, I think it will be easier to push the button if you attach the rubber feet near the rotary encoder.

![acry5](https://github.com/user-attachments/assets/50af4fb0-865e-4fdd-9e38-2dec7b14b745)

Peel off the protective sheet from the top two acrylic sheets and place them on the board.

![acry6](https://github.com/user-attachments/assets/1715ed4a-61c3-4c3d-b36c-5124e2f5f096)

Just place it in the order of middle → top

![acry7](https://github.com/user-attachments/assets/d3d84f01-e053-483b-9c61-633095871cd5)

Insert the key switch starting from the outer corner.

![acry8](https://github.com/user-attachments/assets/65112eab-0355-44d3-a739-1394181c9c73)

All key switches installed.
# TEST
![ledt](https://github.com/user-attachments/assets/826a8175-cfe8-4690-8351-5bc71a13871f)

Connect it to a computer with a USB cable, and if you have attached an LED, turn it on and test.

I think the way it looks will change depending on the design of the key switch and the color of the housing.

The LED immediately to the left of the microcontroller is a layer indicator. 

The color changes independently because.
# FINAL BUILD
![end](https://github.com/user-attachments/assets/64251e38-35f9-44e7-b2a0-229c0c8b8eaa)

Completed by attaching the keycaps. The rotary encoder knob is approximately 17mm in diameter.

# Enjoy your keyboard life!
